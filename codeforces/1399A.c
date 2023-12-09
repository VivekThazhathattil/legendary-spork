#include <stdio.h>
#include <stdlib.h>

int comp_fn(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

int is_possible(int* arr, int num_elms){
  qsort(arr, num_elms, sizeof(int), comp_fn);
  int i;
  for(i = 1; i < num_elms; ++i){
    if(arr[i] - arr[i - 1] > 1){
      return 0;
    }
  }
  return 1;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* a = (int *)  malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
    }
    if(is_possible(a, n)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    free(a);
  }
  return 0;
}
