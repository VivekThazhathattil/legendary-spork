#include <stdio.h>

int main(){
  int n, m, i, j, left_bit = 0;
  scanf("%d %d", &n, &m);
  for(i = 0; i < n; ++i){
    if(i % 2){
      if(left_bit){
        printf("#");
        for(j = 1; j < m; ++j){
          printf(".");
        }
        printf("\n");
        left_bit = 0;
      }
      else{
        for(j = 0; j < m - 1; ++j){
          printf(".");
        }
        printf("#\n");
        left_bit = 1;
      }
    }
    else{
      for(j = 0; j < m; ++j){
        printf("#");
      }
      printf("\n");
    }
  }
  return 0;
}
