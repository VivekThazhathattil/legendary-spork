#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int i, j;
    char str[9][9];
    for(i = 0; i < 8; ++i){
      scanf("%s", str[i]);
    }
    for(j = 0; j < 8; ++j){
      for(i = 0; i < 8; ++i){
        if(str[i][j] != '.'){
          printf("%c", str[i][j]);
        }
      }
    }
    printf("\n");
  }
  return 0;
}
