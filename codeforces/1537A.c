#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, sum = 0, temp, i;
    scanf("%d", &n);
    int tries = 0;
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      sum += temp;
    }
    if(sum < n){
      printf("1\n");
    }
    else if(sum > n){
      printf("%d\n", sum - n);
    }
    else{
      printf("0\n");
    }
  }
  return 0;
}
