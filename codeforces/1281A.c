#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    char str[1002];
    int len;
    scanf("%s", str);
    for(len = 0; str[len] != '\0'; ++len);
    if(str[len - 1] == 'u'){
      printf("JAPANESE\n");
    }
    else if(str[len - 1] == 'o'){
      printf("FILIPINO\n");
    }
    else{
      printf("KOREAN\n");
    }
  }
  return 0;
}
