#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i;
  int pos_num = 0, neg_num = 0, zero_marked = 0;

  scanf("%d", &n);

  int* a = (int *) malloc(sizeof(int) * n);
  int* marked = (int *) calloc(n, sizeof(int));
  int rem_num = n;

  for(i = 0; i < n; ++i){
    scanf("%d", &(a[i]));
    if(!pos_num && a[i] > 0){
      marked[i] = 1;
      pos_num = a[i];
      --rem_num;
    }
    else if(!neg_num && a[i] < 0){
      marked[i] = 1;
      neg_num = a[i];
      --rem_num;
    }
    else if(!zero_marked && !a[i]){
      marked[i] = 1;
      zero_marked = 1;
    }
  }

  printf("1 %d\n", neg_num);

  if(pos_num){
    printf("1 %d\n", pos_num);
  }
  else{
    printf("2 ");
    int count = 0;
    for(i = 0; i < n; ++i){
      if(a[i] < 0 && !marked[i]){
        printf("%d ", a[i]);
        marked[i] = 1;
        ++count;
        --rem_num;
      }
      if(count > 1){
        break;
      }
    }
    printf("\n");
  }

  printf("%d 0 ", rem_num);
  for(i = 0; i < n; ++i){
    if(!marked[i]){
      printf("%d ", a[i]);
    }
  }
  printf("\n");

  free(marked);
  free(a);

  return 0;
}
