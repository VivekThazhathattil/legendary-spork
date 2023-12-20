#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i = 0;
  scanf("%d", &n);
  char* str = (char*) malloc(sizeof(char) * (n + 1));
  scanf("%s", str);
  int count = 0, cc = 0;
  while(i < n){
    cc = count;
    while(cc--){
      ++i;
    }
    if(i < n){
      printf("%c", str[i]);
    }
    ++count;
  }
  printf("\n");
  free(str);
  return 0;
}
