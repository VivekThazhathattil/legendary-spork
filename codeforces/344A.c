#include <stdio.h>

int main(){
  char magnet[3], magnet_end;
  int n, count = 0;
  scanf("%d", &n);
  if(n < 1){
    printf("0\n");
    return 0;
  }
  scanf("%s", magnet);
  magnet_end = magnet[1];
  while(--n){
    scanf("%s", magnet);
    if(magnet_end == magnet[0])
      ++count;
    magnet_end = magnet[1];
  }
  printf("%d\n", ++count);
  return 0;
}
