#include <stdio.h>

int main(){
  long long int n, m, a;
  scanf("%lld %lld %lld", &n, &m, &a);
  long long int n1, m1;
  if(n%a){
    n1 = n/a + 1;
  }
  else{
    n1 = n/a;
  }
  if(m%a){
    m1 = m/a + 1;
  }
  else{
    m1 = m/a;
  }
  printf("%lld\n", n1 * m1);
  return 0;
}
