#include <stdio.h>
#include <stdlib.h>

int comp(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* arr = (int*) malloc(sizeof(int) * n);
    int sum = 0;
    for(i = 0; i < n; ++i){
      scanf("%d", &arr[i]);
      sum += arr[i];
    }
    if(sum % n){
      printf("-1\n");
    }
    else{
      int avg = sum/n;
      int total_deficit = 0;
      for(i = 0; i < n; ++i){
        if(arr[i] < avg){
          total_deficit += avg - arr[i];
        }
        arr[i] -= avg;
      }
      qsort(arr, n, sizeof(int), comp);
      int k = 0;
      i = n - 1;
      while(i >= 0 && total_deficit > 0){
        total_deficit -= arr[i];
        --i;
        ++k;
      }
      printf("%d\n", k);
    }
    free(arr);
  }
  return 0;
}
