#include <stdio.h>

int main(){
  int n, i;
  int m, c, mscore = 0, cscore = 0;
  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    scanf("%d %d", &m, &c);
    if(m > c){
      ++mscore;
    }
    else if(m < c){
      ++cscore;
    }
  }
  if(mscore > cscore){
    printf("Mishka\n");
  }
  else if(mscore < cscore){
    printf("Chris\n");
  }
  else{
    printf("Friendship is magic!^^\n");
  }
  return 0;
}
