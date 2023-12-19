#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, m, i, j;
    scanf("%d %d", &n, &m);

    char tar[5] = "vika";

    char** str = 
      (char**) malloc(sizeof(char*) * (n + 1));

    /* read input */
    for(i = 0; i < n; ++i){
      str[i] = (char*) malloc(sizeof(char) * (m + 1));
      scanf("%s", str[i]);
    }

    int k = 0;
    for(j = 0; j < m; ++j){
      for(i = 0; i < n; ++i){
        if(k < 4 && str[i][j] == tar[k]){
          ++k;
          break;
        }
      }
    }

    /* print ans */
    if(k != 4){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }

    /* free all dynamically allocated variables */
    for(i = 0; i < n; ++i){
      free(str[i]);
    }
    free(str);
  }
  return 0;
}
