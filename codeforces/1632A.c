#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    char s[101];
    scanf("%d", &n);
    scanf("%s", s);
    if(n == 1){
      printf("YES\n");
    }
    else if(n == 2){
      if(s[0] != s[1]){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
