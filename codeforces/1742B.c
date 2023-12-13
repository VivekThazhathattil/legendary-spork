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
    int* a = (int *) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comp);
    int flag = 0;
    for(i = 1; i < n; ++i){
      if(a[i] <= a[i - 1]){
        flag = 1;
        break;
      }
    }
    if(flag){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
    free(a);
  }
  return 0;
}
