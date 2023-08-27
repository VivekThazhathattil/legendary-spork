#include <stdio.h>

int main(){
  int n, count = 0;
  scanf("%d", &n);
  count += n/100;
  n %= 100;
  count += n/20;
  n %= 20;
  count += n/10;
  n %= 10;
  count += n/5;
  n %= 5;
  count += n;
  printf("%d\n", count);
  return 0;
}
