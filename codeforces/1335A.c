#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    if(n % 2){
      printf("%d\n", n/2);
    }
    else{
      printf("%d\n", n/2 - 1);
    }
  }
  return 0;
}
