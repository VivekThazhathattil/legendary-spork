#include <stdio.h>

int get_num_digits(int n){
  int count = 0;
  while(n % 10){
    n /= 10;
    ++count;
  }
  return count;
}

int get_next_lucky_num(int num){
  n_digs = get_num_digits(num);
  while()
}

int main(){
  int n;
  scanf("%d", &n);
  int flag = 0, candidate_num;
  while(candidate_num = get_next_lucky_num(1) <= n) {
    if(n % candidate_num == 0){
      flag = 1;
      break;
    }
  }
  if(flag){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
