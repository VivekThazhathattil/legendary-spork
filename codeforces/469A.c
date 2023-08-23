#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_SIZE 512

typedef struct ARR_CONTAINER_s{
  int* arr;
  int len;
} arr_container_t;

int get_num(char* s, int n){
  int num = 0, i = 0;
  printf("n = %d\n", n);
  while(n--){
    printf("num = %d\n", num);
    num = num*10 + (s[i++] - '0');
  }
  return num;
}

arr_container_t* get_arr_from_str(char* str){
  printf("Length of the string: %d\n", strlen(str));
  int i = 0, num_len = 0;
  int got_first_num = 0, inserted_elms = 0;
  int *arr;
  char num[3];

  printf("CP#1\n");
  do{
    if(str[i] == ' ' || str[i] == '\0'){
      printf("num_len1 = %d\n", num_len);
      if(num_len){
        int temp = get_num(num, num_len);
        printf("temp = %d\n", temp);
        if(!got_first_num){
          printf("Got the first number!\n");
          ++got_first_num;
          arr = (int*) malloc(sizeof(int) * temp);
        }
        else{
          printf("%d\n", temp);
          arr[inserted_elms++] = temp;
          printf("%d\n", arr[inserted_elms - 1]);
        }
        num_len = 0;
      }
    }
    else{
      printf("str[%d] = %c\n", i, str[i]);
      num[num_len++] = str[i];
    }
    ++i;
  }while(str[i] != '\0');

  arr_container_t* container =
    (arr_container_t*) malloc(sizeof(arr_container_t));
  container->arr = arr;
  container->len = inserted_elms;
  return container;
}

void free_arr_container(arr_container_t* ac){
  free(ac->arr);
  free(ac);
}

int comp(const void* l, const void *r){
  return *(int*)l - *(int*)r;
}

int main(){
  char xstr[MAX_STR_SIZE], ystr[MAX_STR_SIZE];
  int n;

  scanf("%d", &n);
  scanf("%[^\n]%*c", xstr);
  scanf("%[^\n]%*c", ystr);
  printf("xstr = %s\n", xstr);

  arr_container_t* x_con = get_arr_from_str(xstr);
  arr_container_t* y_con = get_arr_from_str(ystr);

  qsort(x_con->arr, x_con->len, sizeof(int), comp);
  qsort(y_con->arr, y_con->len, sizeof(int), comp);

  int xi = 0, yi = 0, all_levels_covered = 1, curr_level = 1;
  while(xi < x_con->len || yi < y_con->len){
    if(x_con->arr[xi] != curr_level && y_con->arr[yi] != curr_level){
      all_levels_covered = 0;
      break;
    }
    while(xi < x_con->len && x_con->arr[xi] == curr_level){
      ++xi;
    }
    while(yi < y_con->len && y_con->arr[yi] == curr_level){
      ++yi;
    }
    ++curr_level;
  }

  if(all_levels_covered){
    printf("I become the guy.\n");
  }
  else{
    printf("Oh, my keyboard!\n");
  }

  free_arr_container(x_con);
  free_arr_container(y_con);

  return 0;
}
