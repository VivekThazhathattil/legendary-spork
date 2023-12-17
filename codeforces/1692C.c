#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int i, j;
    char bd[9][9];
    for(i = 0; i < 8; ++i){
      scanf("%s", bd[i]);
    }
    int flag = 0;
    for(i = 1; i < 7; ++i){
      for(j = 1; j < 7; ++j){
        if(bd[i - 1][j - 1] == '#' && 
           bd[i - 1][j + 1] == '#' &&
           bd[i + 1][j - 1] == '#' &&
           bd[i + 1][j + 1] == '#' &&
           bd[i][j] == '#'
        ){
          flag = 1;
          break;
        }
      }
      if(flag){
        break;
      }
    }
    printf("%d %d\n", i + 1, j + 1);
  }
  return 0;
}
