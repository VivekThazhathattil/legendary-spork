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
    int max = 0;
    for(i = 0; i < n; ++i){
      if(max < str[i] - 'a' + 1) {
        max = str[i] - 'a' + 1;
      }
    }
    printf("%d\n", max);
    free(str);
  }
  return 0;
}
