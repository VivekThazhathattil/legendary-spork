#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int min = 10, temp, i;
    long long int prod = 1;
    int num_zeros = 0;
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(temp != 0){
        prod = prod * temp;
      }
      else{
        ++num_zeros;
      }
      if (min > temp){
        min = temp;
      }
    }
    if(num_zeros > 1){
      prod = 0;
    }
    else if(min != 0){
      prod = (prod/min)*(min + 1);
    }
    if (min == 0){
      prod = prod*(min + 1);
    }
    if(num_zeros > 1){
      printf("0\n");
    }
    else{
      printf("%lld\n", prod);
    }
  }
  return 0;
}
