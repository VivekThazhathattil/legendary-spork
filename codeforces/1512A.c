#include <stdio.h>
#include <stdlib.h>

int get_same_num(int*);
int get_idx(int*, int, int);

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int *a = (int*) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
    }
    int same_num = get_same_num(a);
    int oth_num_idx = get_idx(a,n,same_num);
    printf("%d\n", oth_num_idx);
    free(a);
  }
  return 0;
}

int get_same_num(int *arr){
  if(arr[0] == arr[1]){
    return arr[0];
  }
  else if(arr[1] == arr[2]){
    return arr[1];
  }
  return arr[2];
}

int get_idx(int* arr, int num_elms, int common_num){
  int i;
  for(i = 0; i < num_elms; ++i){
    if(arr[i] != common_num){
      return i + 1;
    }
  }
  return -1;
}
