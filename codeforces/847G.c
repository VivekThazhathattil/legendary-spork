#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, j, a[7];
  scanf("%d", &n);

  for(i = 0; i < 7; ++i){
    a[i] = 0;
  }

  for(i = 0; i < n; ++i){
    char s[8];
    scanf("%s", s);
    for(j = 0; j < 7; ++j){
      if(s[j] - '0'){
        ++a[j];
      }
    }
  }

  for(i = 1; i < 7; ++i){
    if(a[0] < a[i]) {
      a[0] = a[i];
    }
  }

  printf("%d\n", a[0]);

  return 0;
}
