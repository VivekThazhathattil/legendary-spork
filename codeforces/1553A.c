#include <stdio.h>

int leading_digit(int n){
  int digit = 0;
  while(n){
    digit = n%10;
    n /= 10;
  }
  return digit;
}

int get_num_digits(int n){
  int num = 0;
  while(n){
    ++num;
    n /= 10;
  }
  return num;
}

int residual_num(int n, int ld, int ndigs){
  int m = 1; 
  while(--ndigs){
    m *= 10;
  }
  return n - ld*m;
}

int get_mult(int n){
  int mult = 1;
  while(n){
    mult *= 10;
    --n;
  }
  return mult;
}

int interesting_nums(int n){
  if(n < 9){
    return 0;
  }
  else if(n == 9){
    return 1;
  }
  int ld = leading_digit(n);
  int num_digits = get_num_digits(n);
  n = residual_num(n, ld, num_digits);
  return ld * get_mult(num_digits - 2) + interesting_nums(n);
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int num = interesting_nums(n);
    printf("%d\n", num);
  }
  return 0;
}
