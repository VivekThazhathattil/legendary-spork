#include <stdio.h>
#include <stdlib.h>

int comp(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, d;
    scanf("%d %d", &n, &d);
    int* a = (int*) malloc(sizeof(int) * n);
    int i;
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comp);
    if(a[0] + a[1] <= d || a[n - 1] <= d){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    free(a);
  }
  return 0;
}
