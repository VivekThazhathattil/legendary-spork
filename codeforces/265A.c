#include <stdio.h>

int main(){
  char s[51], t[51];
  scanf("%s", s);
  scanf("%s", t);

  int i = 0;
  int j = 0;
  while(s[i] != '\0' && 
      t[j] != '\0'){
    if(s[i] == t[j]){
      ++i;
    }
    ++j;
  }
  printf("%d\n", i + 1);
  return 0;
}
