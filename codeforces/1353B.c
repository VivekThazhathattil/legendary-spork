#include <stdio.h>
#include <stdlib.h>

int comp_fun(const void* l, const void *r){
  return *(int*)l - *(int*)r;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, k, i;
    scanf("%d %d", &n, &k);
    int* a = (int*) malloc(sizeof(int) * n);
    int* b = (int*) malloc(sizeof(int) * n);
    int sum = 0;
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
      sum += a[i];
    }
    for(i = 0; i < n; ++i){
      scanf("%d", &b[i]);
    }
    qsort(a, n, sizeof(int), comp_fun);
    qsort(b, n, sizeof(int), comp_fun);
    for(i = 0; i < k; ++i){
      if(a[i] < b[n-1-i]){
        sum = sum - a[i] + b[n-1-i];
      }
      else{
        break;
      }
    }
    printf("%d\n", sum);
    free(a);
    free(b);
  }
  return 0;
}
