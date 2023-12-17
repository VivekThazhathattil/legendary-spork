#include <stdio.h>

int num_digits(int n){
  int count = 0;
  while(n){
    ++count;
    n /= 10;
  }
  return count;
}

int num_digit_changes(int n1, int n2){
  int num = 0;
  while(n1 && n2){
    int dig1 = n1 % 10;
    int dig2 = n2 % 10;
    if(dig1 != dig2){
      ++num;
    }
    n1 /= 10;
    n2 /= 10;
  }

  if(n1){
    num += num_digits(n1);
  }
  else{
    num += num_digits(n2);
  }
  return num;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    if(n % 7){
      if(
          num_digit_changes(n, n - (n % 7)) < 
          num_digit_changes(n, n + (7 - (n % 7)))
      ){
        printf("%d\n", n - (n % 7));
      }
      else{
        printf("%d\n", n + (7 - (n % 7)));
      }
    }
    else{
      printf("%d\n", n);
    }
  }
  return 0;
}
