#include <stdio.h>

typedef long long int llint;

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    llint a, b, n;
    scanf("%lld %lld %lld", &a, &b, &n);
    int count = 0;
    while(n >= a && n >= b){
      llint min = a < b ? a : b;
      llint oth = a + b - min;
      min += oth;
      a = min;
      b = oth;
      ++count;
    }
    printf("%d\n", count);
  }
  return 0;
}
