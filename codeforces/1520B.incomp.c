#include <stdio.h>

int get_num_digits(int n){
  int count = 0;
  while(n){
    ++count;
    n /= 10;
  }
  return count;
}

int get_leading_digit(int n, int ndigits){
  int mult = 1;
  for(i = 0; i < ndigits - 1; ++i){
    mult *= 10;
  }
  return n / mult;
}

int get_num_ord(int n, int nd, int ld){
  int count = (nd - 1)*9;
  int mult = 1, i;
  for(i = 0; i < nd - 1; ++i){
    mult *= 10;
  }
  while(mult){
    int dig = (n/mult);
    count += (dig - 1)
    mult /= 10;
  }
  return count;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int num_digits = get_num_digits(n);
    int leading_digit = get_leading_digit(n, num_digits);
    printf("%d", get_num_ord(n, num_digits, leading_digit));
  }
  return 0;
}
