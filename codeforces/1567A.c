#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    char* str = (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", str);
    int i;
    for(i = 0; i < n; ++i){
      if(str[i] == 'L'){
        printf("L");
      }
      else if(str[i] == 'R'){
        printf("R");
      }
      else if(str[i] == 'U'){
        printf("D");
      }
      else{
        printf("U");
      }
    }
    printf("\n");
    free(str);
  }
  return 0;
}
