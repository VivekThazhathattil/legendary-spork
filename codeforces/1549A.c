#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    printf("2 %d\n", n - 1);
  }
  return 0;
}
