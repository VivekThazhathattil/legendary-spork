#include <stdio.h>

long long int get_factorial(int n){
  long long int mult = 1;
  while(n){
    mult *= n;
    --n;
  }
  return mult;
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%lld\n", get_factorial(a < b ? a : b));
  return 0;
}
