#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char str[4];
    scanf("%s", str);
    printf("%d\n", str[0] - '0' + str[2] - '0');
  }
  return 0;
}
