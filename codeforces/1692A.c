#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int i, arr[4];
    for(i = 0; i < 4; ++i){
      scanf("%d", &arr[i]);
    }
    int count = 0;
    for(i = 1; i < 4; ++i){
      if(arr[i] > arr[0]){
        ++count;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
