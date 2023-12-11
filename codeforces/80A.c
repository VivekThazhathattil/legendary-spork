#include <stdio.h>

int get_next_prime(int num){
  ++num;
  while(1){
    int a = 2;
    int flag = 0;
    while(a*a <= num){
      if(!(num%a)){ // a is a factor of num
        flag = 1;
        break;
      }
      else{
        ++a;
      }
    }
    if(flag){
      ++num;
    }
    else{
      break;
    }
  }
  return num;
}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  if(get_next_prime(n) == m){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
