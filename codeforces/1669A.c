#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    if(n <= 1399){
      printf("Division 4\n");
    }
    else if(n <= 1599){
      printf("Division 3\n");
    }
    else if(n <= 1899){
      printf("Division 2\n");
    }
    else{
      printf("Division 1\n");
    }
  }
  return 0;
}
