#include <stdio.h>
#define NUM_ALFS 26

int check(int* s, char c){
  return s[c - 'a'] == 1;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    char s[11];
    int alf[NUM_ALFS];
    for(i = 0; i < NUM_ALFS; ++i){
      alf[i] = 0;
    }
    scanf("%d", &n);
    scanf("%s", s);
    for(i = 0; i < n; ++i){
      if(s[i] - 'a' >= 0 && s[i] - 'a' < 26 && s[i] != 't'){
        ++(alf[s[i] - 'a']);
      }
      else if(s[i] == 'T'){
        ++(alf[s[i] - 'A']);
      }
    }
    if(check(alf,'t') && 
        check(alf, 'i') && 
        check(alf, 'm') &&
        check(alf, 'u') &&
        check(alf, 'r') && n == 5){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
