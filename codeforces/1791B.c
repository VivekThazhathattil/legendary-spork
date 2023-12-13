#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    char* str = 
      (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", str);
    int x = 0, y = 0, flag = 0;
    for(i = 0; i < n; ++i){
      if(str[i] == 'L') {
        --x;
      }
      else if(str[i] == 'R'){
        ++x;
      }
      else if(str[i] == 'U'){
        ++y;
      }
      else if(str[i] == 'D'){
        --y;
      }
      if(x == 1 && y == 1){
        flag = 1;
        break;
      }
    }
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    free(str);
  }
  return 0;
}
