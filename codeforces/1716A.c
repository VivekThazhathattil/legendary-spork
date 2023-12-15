#include <stdio.h>

int min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    if(n > 3){
      printf("%d\n", n%3 == 0 ? n/3 : n/3 + 1);
    }
    else{
      if(n == 1){
        printf("2\n");
      }
      else{
        printf("1\n");
      }
    }
  }
  return 0;
}
