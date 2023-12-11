#include <stdio.h>

int main(){
  char s[101];
  scanf("%s", s);
  int i = 0, flag = 0;
  while(s[i] != '\0'){
    int sum = 0; 
    char curr = s[i];
    while(s[i] != '\0' && curr == s[i]){
      ++i;
      ++sum;
    }
    if(sum >= 7){
      flag = 1;
      break;
    }
  }
  if(flag){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
