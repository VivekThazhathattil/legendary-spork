#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--) {
    int n, d, i;
    scanf("%d %d", &n, &d);
    char* str = (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", str);
    int flag = 0;
    for(i = 0; i < n; ++i){
      //printf("str[%d] - '0' = %d, d=%d\n", i, str[i] - '0', d);
      if(!flag && str[i] - '0' < d){
        printf("%c", d + '0');
        flag = 1;
      }
      printf("%c", str[i]);
    }
    if(!flag){
      printf("%c", d + '0');
    }
    printf("\n");
    free(str);
  }
  return 0;
}
