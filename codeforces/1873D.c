#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, k;
    scanf("%d %d", &n, &k);
    char *s = (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", s);
    int count = 0, i;
    for(i = 0; i < n; ++i){
      if(s[i] == 'B'){

        //printf("Before:\n");
        //int j = 0;
        //for(; j < n; ++j){
        //  printf("%c", s[j]);
        //}
        //printf("\n");

        ++count;
        int ki = i;
        while(ki - i < k){
          if(ki < n){
            s[ki] = 'W';
            ++ki;
          }
          else{
            break;
          }
        }

        //printf("After:\n");
        //j = 0;
        //for(; j < n; ++j){
        //  printf("%c", s[j]);
        //}
        //printf("\n");

      }
    }
    printf("%d\n", count);
    free(s);
  }
  return 0;
}
