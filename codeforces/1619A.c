#include <stdio.h>

int get_len(char* s){
  int i = 0;
  while(s[i] != '\0'){
    ++i;
  }
  return i;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[101];
    scanf("%s", s);
    int i, n = get_len(s), flag = 0;
    if(n%2 == 0){
      int count = 0;
      for(i = 0; i < n/2; ++i){
        if(s[i] == s[n/2 + i]){
          ++count;
        }
      }
      if(count == n/2){
        flag = 1;
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
