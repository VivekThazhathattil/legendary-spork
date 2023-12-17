#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int num = (1 + n)/2;
    for(i = 0; i < n; ++i){
      printf("%d ", num);
    }
    printf("\n");
  }
  return 0;
}
