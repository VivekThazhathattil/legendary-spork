#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    int num;
    scanf("%d", &num);
    printf(num % 4 || num < 4 ? "NO\n" : "YES\n");
  }
  return 0;
}
