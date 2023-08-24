#include <stdio.h>

int is_pangram(char* str, int len){
  int a[26], i;
  for(i = 0; i < 26; ++i){
    a[i] = 0;
  }
  for(i = 0; i < len; ++i){
    if('a' <= str[i] && str[i] <= 'z'){
      a[str[i] - 'a'] = 1;
    }
    if('A' <= str[i] && str[i] <= 'Z'){
      a[str[i] - 'A'] = 1;
    }
  }
  for(i = 0; i < 26; ++i){
    if(a[i] == 0)
      return 0;
  }
  return 1;
}

int main(){
  int n;
  char str[101];
  scanf("%d", &n);
  scanf("%s", str);
  if(is_pangram(str, n)){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
