#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[9], a[9], b[9];
    scanf("%s", s);
    a[0] = s[0];
    int i = 1;
    while(s[i] == '0'){
      a[i] = s[i];
      ++i;
    }
    a[i] = '\0';
    int j = 0;
    while(s[i] != '\0'){
      b[j] = s[i];
      ++i;
      ++j;
    }
    b[j] = '\0';
    int numa = atoi(a);
    int numb = atoi(b);
    if(numa < numb){
      printf("%d %d\n", numa, numb);
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}
