#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, m;
    scanf("%d %d", &n, &m);
    if(n*m % 2){
      printf("%d\n", (n*m + 1)/ 2);
    }
    else{
      printf("%d\n", n*m/2);
    }
  }
  return 0;
}
