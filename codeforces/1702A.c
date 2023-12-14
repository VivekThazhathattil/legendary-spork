#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int m;
    scanf("%d", &m);
    int num_digits = 0;
    int leading_digit = 0;
    int n = m, mult = 1;
    while(n) {
      if(n < 10){
        leading_digit = n;
      }
      n /= 10;
      ++num_digits;
    }
    while(--num_digits){
      mult *= 10; 
    }
    printf("%d\n", m - mult);
  }
  return 0;
}
