#include <stdio.h>

int vmin(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[11][11];
    int i, j, pts = 0;
    for(i = 0; i < 10; ++i){
      scanf("%s", s[i]);
    }
    for(i = 0; i < 10; ++i){
      for(j = 0; j < 10; ++j){
        if(s[i][j] == 'X'){
          if(i < 5 && j < 5){
            pts += vmin(i + 1, j + 1);
          }
          else if(i < 5 && j >= 5){
            pts += vmin(i + 1, 10 - j);
          }
          else if(i >=5 && j < 5){
            pts += vmin(10 - i, j + 1);
          }
          else{
            pts += vmin(10 - i, 10 - j);
          }
        }
      }
    }
    printf("%d\n", pts);
  }
  return 0;
}
