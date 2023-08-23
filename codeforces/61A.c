#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char num1[101], num2[101];
  scanf("%s", num1);
  scanf("%s", num2);
  int len = strlen(num1);
  for(i = 0; i < len; ++i){
      printf("%c", "10"[num1[i] == num2[i]]);
  }
  printf("\n");
  return 0;
}
