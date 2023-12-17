#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int mult = 10, num = 0;
    while(mult <= n){
      num += 9*(mult/100);
      mult *= 10;
    }
    printf("%d\n", num);
  }
  return 0;
}
