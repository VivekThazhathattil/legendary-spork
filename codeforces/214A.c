#include <stdio.h>

int eq1(int a, int b, int n){
  return (a*a + b == n);
}

int eq2(int a, int b, int m){
  return (a + b*b == m);
}

int main(){
  int n, m, i, j, count = 0;
  scanf("%d %d", &n, &m);
  for(i = 0; i <= 1000; ++i){
    if(i * i <= n && i <= m){
      for(j = 0; j <= 1000; ++j){
        if(j * j <= m && j <= n){
          if( eq1(i, j, n) && eq2(i, j, m)){
            ++count;
          }
        }
      }
    }
  }
  printf("%d\n", count);
  return 0;
}
