#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char str[20];
    scanf("%s", str);
    int even_found = 0;
    int len = 0;
    int i = 0;
    while(str[i] != '\0'){
      if((str[i] - '0')%2 == 0){
        even_found = 1;
      }
      ++len;
      ++i;
    }
    if(even_found){
      if((str[len - 1] - '0') % 2 == 0){
        printf("0\n");
      }
      else{
        if((str[0] - '0') % 2 == 0){
          printf("1\n");
        }
        else{
          printf("2\n");
        }
      }
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}
