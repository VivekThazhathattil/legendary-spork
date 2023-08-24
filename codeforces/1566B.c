#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int len, marked[2], i = 0, count = 0, zero_str_len = 0;
    char str[100002];
    scanf("%s", str);
    marked[0] = 0; 
    marked[1] = 0;
    for(len = 0; str[len] != '\0'; ++len);
    while(i < len){
     while(str[i] == '0'){
       ++zero_str_len;
       ++i;
     }

     if(zero_str_len){
       zero_str_len = 0;
       ++count;
     }

     if(count > 1){
       break;
     }
     ++i;
    }
    if(zero_str_len){
      ++count;
    }
    printf("%d\n", count > 2 ? 2 : count);
  }
  return 0;
}
