#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    long long int n, m, x;
    scanf("%lld %lld %lld", &n, &m, &x);
    int i, j;
    j = (x - 1)/n;
    i = ((x - 1) % n);
    printf("%lld\n", i*m + j + 1);
  }
  return 0;
}
