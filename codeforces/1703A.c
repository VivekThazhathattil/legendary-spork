#include <stdio.h>

int check(char* str){
  return (str[0] == 'y' || str[0] == 'Y') &&
         (str[1] == 'e' || str[1] == 'E') &&
         (str[2] == 's' || str[2] == 'S');
}

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    char str[4];
    scanf("%s", str);
    printf(check(str) ? "YES\n" : "NO\n");
  }
  return 0;
}
