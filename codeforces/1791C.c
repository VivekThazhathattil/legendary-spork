#include <stdio.h>
#include <stdlib.h>

int criterion(char c1, char c2){
  return 
      (c1 == '0' && c2 == '1') || 
      (c1 == '1' && c2 == '0');
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    char* str = (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", str);
    int del_chars = 0;
    for(i = 0; i < n/2; ++i){
      if(criterion(str[i], str[n - 1 - i])){
        del_chars += 2;
      }
      else{
        break;
      }
    }
    printf("%d\n", n - del_chars);
    free(str);
  }
  return 0;
}
