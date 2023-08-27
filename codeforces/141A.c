#include <stdio.h>

int main(){
  int a[26], i;

  for(i = 0; i < 26; ++i){
    a[i] = 0;
  }

  char str[102], test[102];
  scanf("%s", str);
  for(i = 0; str[i] != '\0'; ++i){
    a[str[i] - 'A']++;
  }

  scanf("%s", str);
  for(i = 0; str[i] != '\0'; ++i){
    a[str[i] - 'A']++;
  }

  scanf("%s", test);
  for(i = 0; test[i] != '\0'; ++i){
    --a[test[i] - 'A'];
  }

  for(i = 0; i < 26; ++i){
    if(a[i] != 0)
      break;
  }

  if(i != 26){
    printf("NO\n");
  }
  else{
    printf("YES\n");
  }

  return 0;
}
