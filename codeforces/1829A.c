#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[11];
    char cf[10] = "codeforces";
    int i, count = 0;
    scanf("%s", s);
    for(i = 0; i < 10; ++i){
      if(s[i] != cf[i]){
        ++count;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
