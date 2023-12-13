#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  int i, prev = -1, curr, 
      len = 0, max_len = 0;
  for(i = 0; i < n; ++i){
    scanf("%d", &curr);
    if(curr > prev){
      ++len;
    }
    else{
      if(len > max_len){
        max_len = len;
      }
      len = 1;
    }
    prev = curr;
  }
  if(len > max_len){
    max_len = len;
  }
  printf("%d\n", max_len);
  return 0;
}
