#include <stdio.h>

int main(){
  int t;
  char str[10] = "codefres";
  scanf("%d", &t);
  while(t--){
    char c;
    int i, flag = 0;
    scanf("%c", &c);
    if(c != '\n'){
      for(i = 0; i < 10; ++i){
        if(str[i] == c){
          printf("YES\n");
          flag = 1;
          break;
        }
      }
      if(!flag){
        printf("NO\n");
      }
    }
    else{
      ++t;
    }
  }
  return 0;
}
