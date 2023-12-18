#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    char* s = 
      (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", s);
    int i;
    char curr = s[0];
    for(i = 1; i < n; ++i){
      if(curr == s[i]){
          printf("%c", curr);
          if(i + 1 < n){
            curr = s[i + 1];
            ++i;
          }
        }
      }
    free(s);
    printf("\n");
  }
  return 0;
}
