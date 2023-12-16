#include <stdio.h>

int get_len(char *str){
  int i = 0;
  while(str[i] != '\0'){
    ++i;
  }
  return i;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char str[50], c;
    scanf("%s", str);
    getchar();
    scanf("%c", &c);
    int n = get_len(str), i;
    int flag = 0;
    for(i = 0; i < n; ++i){
      if(str[i] == c && 
          i % 2 == 0 && 
          (n - 1 - i) % 2 == 0){
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
  }
  return 0;
}
