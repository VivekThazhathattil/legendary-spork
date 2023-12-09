#include <stdio.h>

int main(){
  int k,r,i;
  scanf("%d %d", &k, &r);
  k = k%10;
  i = 1;
  while(i > 0){
    if((k*i)%10 == r || (k*i)%10 == 0){
      printf("%d\n", i);
      break;
    }
    ++i;
  }
  return 0;
}
