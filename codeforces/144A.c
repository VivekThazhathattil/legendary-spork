#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, min_h = 101, min_i = -1, max_h = -1, max_i = -1;
  scanf("%d", &n);
  int* arr = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    scanf("%d", &(arr[i]));
    if(min_h >= arr[i]){
      min_h = arr[i];
      min_i = i;
    }
    if(max_h < arr[i]){
      max_h = arr[i];
      max_i = i;
    }
  }
  int num_swaps = 0;
  if(max_h != arr[0]){
    num_swaps += max_i;
  }
  if(min_h != arr[n-1]){
    num_swaps += n - 1 - min_i;
  }
  if(max_i > min_i){
    --num_swaps;
  }

  printf("%d\n", num_swaps);

  free(arr);
  return 0;
}
