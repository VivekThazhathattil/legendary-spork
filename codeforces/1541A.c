#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    if(n % 2 == 0){
      for(i = 0; i < n; i+=2){
        printf("%d %d ", i + 2, i + 1);
      }
    }
    else{
      for(i = 0; i < n - 4; i += 2){
        printf("%d %d ", i + 2, i + 1);
      }
      printf("%d %d %d", n - 1, n, n - 2);
    }
    printf("\n");
  }
  return 0;
}
