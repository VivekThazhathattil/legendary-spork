#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  char comp[50] = "314159265358979323846264338327";
  while(t--){
    char str[31];
    scanf("%s", str);
    int i = 0, count = 0;
    while(str[i] != '\0'){
      if(str[i] == comp[i]){
        ++count;
        ++i;
      }
      else{
        break;
      }
    }
    printf("%d\n", count);
  }
  return 0;
}
