#include <stdio.h>

int not_vowel(char c){
  return (
      c != 'a' && c != 'A' &&
      c != 'e' && c != 'E' &&
      c != 'i' && c != 'I' &&
      c != 'o' && c != 'O' &&
      c != 'y' && c != 'Y' &&
      c != 'u' && c != 'U'
    );
}

int to_lower(char c){
  if(c >= 'A' && c <= 'Z'){
    return c - 'A' + 'a';
  }
  return c;
}

int main(){
  char s[101];
  scanf("%s", s);
  int i = 0;
  while(s[i] != '\0'){
    if(not_vowel(s[i])){
      printf(".%c", to_lower(s[i]));
    }
    ++i;
  }
  printf("\n");
  return 0;
}
