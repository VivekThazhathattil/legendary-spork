#include <stdio.h>
#include <stdlib.h>

#define MIN_DIF 5000

int comp_fun(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int* arr = (int*) malloc(sizeof(int) * n);
    int i = 0;
    for(; i < n; ++i){
      scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), comp_fun);
    int min = MIN_DIF;
    for(i = 1; i < n; ++i){
      if(min > arr[i] - arr[i - 1]){
        min = arr[i] - arr[i - 1];
      }
    }
    printf("%d\n", min);
    free(arr);
  }
  return 0;
}
