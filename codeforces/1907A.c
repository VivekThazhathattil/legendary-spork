#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char str[3];
    scanf("%s", str);
    int i;
    for(i = 0; i < 8; ++i){
      if(str[0] - 'a' != i){
        printf("%c%c ", 'a' + i, str[1]);
      }
    }
    for(i = 0; i < 8; ++i){
      if(str[1] - '0' != i + 1){
        printf("%c%c ", str[0], '0' + i + 1);
      }
    }
    printf("\n");
  }
  return 0;
}
