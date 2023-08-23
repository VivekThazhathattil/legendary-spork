#include <stdio.h>

int main(){
  int n, p, i;
  double sum = 0;
  scanf("%d", &n);
  for(i = 0; i < n; ++i) {
    scanf("%d", &p);
    sum += p;
  }
  sum /= (double)n;
  printf("%lf\n", sum);
  return 0;
}
