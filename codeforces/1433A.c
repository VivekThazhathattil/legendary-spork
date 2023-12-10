#include <stdio.h>

int get_num_digits(int num){
  int count = 0;
  while(num){
    num = num/10;
    ++count;
  }
  return count;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int x;
    scanf("%d", &x);
    int digit = x%10;
    int num_digits = get_num_digits(x);
    if(num_digits == 1){
      num_digits = 1;
    }
    else if(num_digits == 2){
      num_digits = 3;
    }
    else if(num_digits == 3){
      num_digits = 6;
    }
    else{
      num_digits = 10;
    }
    printf("%d\n", 10*(digit - 1) + num_digits);
  }
  return 0;
}
