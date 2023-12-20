#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    printf("3 4 5 ");
    int k = 7;
    for(i = 0; i < n - 3; ++i){
      printf("%d ", k);
      k += 2;
    }
    printf("\n");
  }
}
