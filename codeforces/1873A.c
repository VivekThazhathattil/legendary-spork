#include <stdio.h>

int doable(char* s){
  return (s[0] == 'a' || 
      s[1] == 'b' || 
      s[2] == 'c');
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[4];
    scanf("%s", s);
    if(doable(s)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
