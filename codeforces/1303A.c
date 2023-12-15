#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char str[101];
    scanf("%s", str);
    int i = 0, n = 0, n1s = 0;
    while(str[i] != '\0'){
      if(str[i] == '1'){
        ++n1s;
      }
      ++i;
      ++n;
    }
    i = 0;
    while(i < n && 
        str[i] - '0' == 0){
      ++i;
    }
    int num_del = 0;
    for(; i < n; ++i){
      if(str[i] == '0'){
        ++num_del;
      }
      else{
        --n1s;
      }
      if(n1s <= 0){
        break;
      }
    }
    printf("%d\n", num_del);
  }
  return 0;
}
