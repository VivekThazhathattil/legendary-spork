#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[51];
    char t[4] = "Yes";
    scanf("%s", s);
    int i, k;
    for(i = 0; i < 3; ++i){
      if(s[0] == t[i]) {
        k = i;
        break;
      }
    }
    if(i == 3){
      printf("NO\n");
    }
    else{
      i = 0;
      int flag = 1;
      while(s[i] != '\0'){
        if(s[i] != t[k%3]){
          flag = 0;
          break;
        }
        ++k;
        ++i;
      }
      if(flag){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
    }
  }
  return 0;
}
