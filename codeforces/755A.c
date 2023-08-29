#include <stdio.h>
#include <math.h>

typedef long long int ll;

int is_prime(ll n){
  if(n < 2){
    return 0;
  }
  if(n == 2){
    return 1;
  }
  if(n % 2 == 0){
    return 0;
  }

  ll m = sqrt(n);
  while(m > 2){
    if(n % m == 0){
      return 0;
    }
    --m;
  }
  return 1;
}

int main(){
  ll n;
  scanf("%lld", &n);
  if(n%2){
    printf("3\n");
  }
  else{
    ll m = 1;
    while(m <= 1000){
      if(!is_prime(n*m + 1)) {
        printf("%lld\n", m);
        break;
      }
      ++m;
    }
  }
  return 0;
}
