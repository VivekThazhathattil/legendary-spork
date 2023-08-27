#include <stdio.h>

int main(){
  int result = 0, n;
  scanf("%d", &n);
  while(n--){
    char str[128];
    scanf("%s", str);
    if(str[0] == 'I'){
      result += 20;
    }
    else if(str[0] == 'D'){
      result += 12;
    }
    else if(str[0] == 'C'){
      result += 6;
    }
    else if(str[0] == 'O'){
      result += 8;
    }
    else{
      result += 4;
    }
  }
  printf("%d\n", result);
  return 0;
}
