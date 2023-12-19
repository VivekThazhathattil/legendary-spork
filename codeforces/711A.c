#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, j;
  scanf("%d", &n);
  char* str = (char*) malloc(sizeof(char) * 6 * n);
  char temp[6];
  for(i = 0; i < n; ++i){
    scanf("%s", temp);
    for(j = 0; j < 5; ++j){
      str[5*i + j] = temp[j];
    }
  }
  int flag = 0;
  for(i = 0; i < n; ++i){
    if(!flag && 
        str[5*i + 0] == 'O' && 
        str[5*i + 1] == 'O'){
      str[5*i + 0] = '+';
      str[5*i + 1] = '+';
      flag = 1;
    }
    if(!flag &&
        str[5*i + 3] == 'O' && 
        str[5*i + 4] == 'O'){
      str[5*i + 3] = '+';
      str[5*i + 4] = '+';
      flag = 1;
    }
  }
  if(!flag){
    printf("NO\n");
  }
  else{
    printf("YES\n");
    for(i = 0; i < n; ++i){
      for(j = 0; j < 5; ++j){
        printf("%c", str[5*i + j]);
      }
      printf("\n");
    }
  }
  free(str);
  return 0;
}
