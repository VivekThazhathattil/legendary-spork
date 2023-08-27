#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int sum1 = 0, sum2 = 0;
    int count = 0;
    while(count < 6){
      int digit = n%10;
      if(count < 3){
        sum1 += digit;
      }
      else{
        sum2 += digit;
      }
      ++count;
      n /= 10;
    }
    printf(sum1 == sum2 ? "YES\n" : "NO\n");
  }
  return 0;
}
