#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, flag = 0;
    scanf("%d", &n);
    printf("n = %d\n", n);
    char temp;
    char* sa = (char*) malloc(sizeof(char) * (n + 1));
    for(i = 0; i < n; ++i){
      sa[i] = getchar();
    }
    for(i = 0; i < n; ++i){
      temp = getchar();
      if(temp != sa[i] &&
          (sa[i] == 'B' && temp != 'G') &&
          (sa[i] == 'G' && temp != 'B') &&
          (sa[i] == 'R' && temp == 'G') &&
          (sa[i] == 'R' && temp == 'B')){
        flag = 1;
      }
    }
    if(flag){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
    free(sa);
  }
  return 0;
}
