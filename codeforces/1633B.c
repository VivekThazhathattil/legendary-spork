#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char str[200001];
    scanf("%s", str);
    int count0 = 0, count1 = 0, i = 0;
    while(str[i] != '\0'){
      if(str[i] == '0'){
        ++count0;
      }
      else{
        ++count1;
      }
      ++i;
    }
    if(count0 == count1){
      printf("%d\n", count0 - 1);
    }
    else{
      printf("%d\n", count0 > count1 
          ? count1
          : count0);
    }
  }
}
