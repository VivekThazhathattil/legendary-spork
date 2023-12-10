#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* arr = (int*) malloc(sizeof(int) * n);
    int min = 1e9 + 1;
    int max = -1;
    for(i = 0; i < n; ++i){
      scanf("%d", &arr[i]);
      if(max < arr[i]){
        max = arr[i];
      }
      if(min > arr[i]){
        min = arr[i];
      }
    }
    printf("%d\n", max - min);
    free(arr);
  }
  return 0;
}
