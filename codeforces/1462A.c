#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, k;
    scanf("%d", &n);
    int* b = (int *) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &b[i]);
    }
    for(k = 0, i = 0; k < n; ++k){
      if(k % 2){
        printf("%d ", b[n - 1 - i]);
        ++i;
      }
      else{
        printf("%d ", b[i]);
      }
    }
    printf("\n");
    free(b);
  }
  return 0;
}
