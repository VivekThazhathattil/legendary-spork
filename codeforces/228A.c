#include <stdio.h>
#include <stdlib.h>

int comp(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

int main(){
  int arr[4], i, count = 0;
  scanf("%d %d %d %d", arr, arr + 1, arr + 2, arr + 3);
  qsort(arr, 4, sizeof(int), comp);
  for(i = 0; i < 3; ++i){
    if(arr[i] == arr[i+1])
      ++count;
  }
  printf("%d\n", count);
  return 0;
}
