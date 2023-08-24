#include <stdio.h>

int main(){
  int k, l, m, n, d, i, damaged = 0;
  scanf("%d", &k);
  scanf("%d", &l);
  scanf("%d", &m);
  scanf("%d", &n);
  scanf("%d", &d);
  for(i = 1; i <= d; ++i){
    if(!(i % k) || !(i % l) || 
      !(i % m) || !(i % n))
      ++damaged;
  }
  printf("%d\n", damaged);
  return 0;
}
