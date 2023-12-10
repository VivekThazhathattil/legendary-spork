#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    if(n <= 2 || ((n/2)%2)){
      printf("NO\n");
    }
    else{
      printf("YES\n");
      int num = 2;
      long long int sum = 0;
      for(i = 0; i < n/2; ++i){
        printf("%d ",num);
        sum += num;
        num += 2;
      }
      num = 1;
      for(i = 0; i < n/2 - 1;  ++i){
        printf("%d ", num);
        sum -= num;
        num += 2;
      }
      printf("%d\n", sum);
    }
  }
  return 0;
}
