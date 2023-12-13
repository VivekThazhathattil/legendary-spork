#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, max = -1, min = 100000001;
    scanf("%d", &n);
    int* arr = (int *) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &arr[i]);
      if(max < arr[i]){
        max = arr[i];
      }
      if(min > arr[i]){
        min = arr[i];
      }
    }
    int candies_eaten = 0;
    for(i = 0; i < n; ++i){
      candies_eaten += arr[i] - min;
    }
    free(arr);
    printf("%d\n", candies_eaten);
  }
  return 0;
}
