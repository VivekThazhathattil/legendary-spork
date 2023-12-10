#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, teacher_sus = 0;
    scanf("%d", &n);
    char* str = (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", str);
    int alf[26];
    for(i = 0; i < 26; ++i){
      alf[i] = 0;
    }
    for(i = 0; i < n;){
      char curr = str[i];
      if(alf[curr - 'A']){
        teacher_sus = 1;
        break;
      }
      else{
        alf[curr - 'A'] = 1;
      }
      while(i < n && curr == str[i]){
        ++i;
      }
    }
    if(teacher_sus){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
    free(str);
  }
  return 0;
}
