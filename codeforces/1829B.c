#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, len = 0, max_len = 0, temp;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(!temp){
        ++len;
      }
      else{
        if(max_len < len){
          max_len = len;
        }
        len = 0;
      }
    }
    if(max_len < len){
      max_len = len;
    }
    printf("%d\n", max_len);
  }
  return 0;
}
