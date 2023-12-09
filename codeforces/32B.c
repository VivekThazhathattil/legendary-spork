#include <stdio.h>

int get_str_len(char* s){
  int i = 0;
  while(s[i] != '\0'){
    ++i;
  }
  return i; 
}

int main(){
  char str[201];
  scanf("%s", str);
  int n = get_str_len(str);
  int i = 0;
  while(i < n){
    if(str[i] == '.'){
      printf("0");
      ++i;
    }
    else{ // s[i] == '-'
      if(str[i+1] == '.'){
        printf("1");
      }
      else{
        printf("2");
      }
      i += 2;
    }
  }
  printf("\n");
  return 0;
}
