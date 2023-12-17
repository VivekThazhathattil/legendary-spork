#include <stdio.h>
#include <stdlib.h>
#define NUM 7

int comp(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a[NUM], i;
    for(i = 0; i < NUM; ++i){
      scanf("%d", &a[i]);
    }
    qsort(a, NUM, sizeof(int), comp);
    printf("%d %d %d\n", a[0], a[1], a[NUM - 1] - a[0] - a[1]);
  }
  return 0;
}
