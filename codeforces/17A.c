#include <stdio.h>
#include <math.h>

int is_prime(int num){
  if(num == 2){
    return 1;
  }

  if(num % 2 == 0 || num < 2){
    return 0;
  }

  int flag = 1;
  int i = sqrt(num);

  if(i % 2 == 0){
    --i;
  }

  while(i >= 3){
    if(num % i == 0){
      flag = 0;
      break;
    }
    i -= 2;
  }
  return flag;
}

int is_noldbach(int num){
  if(!is_prime(num)){
    return 0;
  }
  
  --num;

  int i = num/2; 
  while(i > 1 && !is_prime(i)){
    --i;
  }
  if(i < 2){
    return 0;
  }

  int j = num/2 + 1;
  while(j < num && !is_prime(j)){
    ++j;
  }
  if(j >= num){
    return 0;
  }

  return (i + j == num) && 
         is_prime(i) && is_prime(j);
}

int main(){
  int n, k, i, count = 0; 
  scanf("%d %d", &n, &k);
  for(i = 2; i <= n; ++i){
    if(is_noldbach(i)){
      //printf("%d\n", i);
      ++count;
    }
  }

  if(count >= k){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
