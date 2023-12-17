#include <stdio.h>
#include <stdlib.h>

int comp(const void* l, const void* r){
  return *(int*)r - *(int*)l;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* a = (int*) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comp);
    int sum = 0;
    for(i = 0; i < n/2; ++i){
      sum += a[i] - a[n - 1 - i];
    }
    printf("%d\n", sum);
    free(a);
  }
  return 0;
}
