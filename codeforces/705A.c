#include <stdio.h>

int main(){
  int n, i;
  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    printf("I ");
    if(!(i % 2)){
      printf("hate ");
    }
    else{
      printf("love ");
    }
    if(i != n - 1){
      printf("that ");
    }
    else{
      printf("it\n");
    }
  }
  return 0;
}
