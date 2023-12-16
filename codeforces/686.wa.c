#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, j;
  long int d, x;
  char sn, buf[100];
  scanf("%d %ld", &n, &x);
  long int num_distressed = 0;

  for(i = 0; i < n + 1; ++i){
    fgets(buf, sizeof(char) * 100, stdin);
    sn = buf[0];
    for(j = 2; buf[j] != '\0'; ++j){
      buf[j - 2] = buf[j];
    }
    buf[j - 2] = '\0';
    d = atol(buf);
    if(sn == '+'){
      x += d;
    }
    else{
      if(x >= d){
        x -= d;
      }
      else{
        ++num_distressed;
      }
    }
  }
  printf("%ld %ld\n", x, num_distressed);
  return 0;
}
