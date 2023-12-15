#include <stdio.h>
#include <stdlib.h>

int main(){
  int n;
  scanf("%d", &n);
  char* str = 
    (char*) malloc(sizeof(char) * (n + 1));
  scanf("%s", str);
  int l = 0, r = 0, i = 0;
  while(str[i] != '\0'){
    if(str[i] == 'L'){
      ++l;
    }
    else{
      ++r;
    }
    ++i;
  }
  printf("%d\n", l + r + 1);
  free(str);
  return 0;
}
