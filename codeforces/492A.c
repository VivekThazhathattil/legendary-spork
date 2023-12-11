#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int sum = 0;
  int nblocks = 1;
  int height = 0;
  while(1){
    //printf("nblocks: %d\n", nblocks);
    sum += nblocks;
    if(sum > n){
      break;
    }
    height++;
    nblocks = (height + 1)*(height + 2)/2;
  }
  printf("%d\n", height);
  return 0;
}
