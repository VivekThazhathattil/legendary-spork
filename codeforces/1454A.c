#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    for(i = 2; i <= n; ++i){
      printf("%d ", i);
    }
    printf("1\n");
  }
  return 0;
}
