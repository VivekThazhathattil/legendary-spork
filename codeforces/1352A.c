#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    int num, res[6], k = 0, mult = 1;
    scanf("%d", &num);
    while(num){
      if(num % 10){
        res[k] = (num % 10)*mult;
        ++k;
      }
      num = num/10;
      mult = mult*10;
    }
    printf("%d\n", k);
    while(--k >= 0){
      printf("%d ", res[k]);
    }
    printf("\n");
  }
  return 0;
}
