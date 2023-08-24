#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  printf("1 ");
  if((n - 2) % 3 == 0){
    printf("2 %d\n", n - 3);
  }
  else{
    printf("1 %d\n", n - 2);
  }
  return 0;
}
