#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  if(n % 2){ // n odd
    printf("9 %d\n", n - 9);
  }
  else{ // n even
    printf("4 %d\n", n - 4);
  }
  return 0;
}
