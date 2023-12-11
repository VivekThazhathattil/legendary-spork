#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int count = n/3;
    if(n%3 == 1){
      printf("%d %d\n", count + 1, count);
    }
    else if(n%3 == 2){
      printf("%d %d\n", count, count + 1);
    }
    else{
      printf("%d %d\n", count, count);
    }
  }
  return 0;
}
