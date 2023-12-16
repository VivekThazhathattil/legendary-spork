#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, temp;
    scanf("%d", &n);
    int* check = 
      (int*) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      check[i] = 0;
    }
    for(i = 0; i < 2*n; ++i){
      scanf("%d", &temp);
      if(check[temp - 1] == 0){
        printf("%d ", temp);
        check[temp - 1] = 1;
      }
    }
    printf("\n");
    free(check);
  }
  return 0;
}
