#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    int* arr = (int*) malloc(sizeof(int) * n);
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
      scanf("%d", &arr[i]);
    }
    free(arr);
  }
  return 0;
}
