#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b;
    scanf("%d %d", &a, &b);
    if(a == b){
      printf("0\n");
    }
    else if(a < b){
      if((b - a) % 2){
        printf("1\n");
      }
      else{
        printf("2\n");
      }
    }
    else{ // a > b
      if((a - b) % 2){
        printf("2\n");
      }
      else{
        printf("1\n");
      }
    }
  }
  return 0;
}
