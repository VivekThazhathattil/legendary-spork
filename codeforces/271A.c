#include <stdio.h>
#include <stdlib.h>

int get_arr_len(int num){
  int len = 0;
  while(num){
    ++len;
    num /= 10;
  }
  return len;
}

int* get_digits_array(int num, int len){
  if(len < 1)
    return NULL;
  int* arr = (int*) malloc(sizeof(int) * len);
  int idx = 0;
  while(num){
    int temp = num % 10;
    arr[len - 1 - idx] = temp;
    num /= 10;
    ++idx;
  }
  return arr;
}

int not_unique_elms(int k, int* arr, int n){
  int i;
  for(i = 0; i < n; ++i){
    if(k != i){
      if(arr[i] == arr[k])
        return 1;
    }
  }
  return 0;
}

int is_not_distinct(int num){
  int i;
  int len = get_arr_len(num);
  int* arr = get_digits_array(num, len);
  for(i = 0; i < len - 1; ++i){
    if(not_unique_elms(i, arr, len)){
      free(arr);
      return 1;
    }
  }
  free(arr);
  return 0;
}

int main(){
  int year;
  scanf("%d", &year);
  while(is_not_distinct(++year));
  printf("%d\n", year);
  return 0;
}
