#include <stdio.h>
#include <stdlib.h>

int get_abs(int num){
  if(num < 0){
    return -num;
  }
  return num;
}

int main(){
  int n, i, *arr;
  scanf("%d", &n);
  arr = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    scanf("%d", &(arr[i]));
  }
  int min = get_abs(arr[n-1] - arr[0]), min_i = n, min_j = 1;
  for(i = 1; i < n; ++i){
    if(min > get_abs(arr[i] - arr[i-1])){
      min = get_abs(arr[i] - arr[i-1]);
      min_i = i + 1;
      min_j = i;
    }
  }
  printf("%d %d\n", min_i, min_j);
  free(arr);
  return 0;
}
