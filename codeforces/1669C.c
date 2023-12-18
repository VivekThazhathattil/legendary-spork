#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, temp, i;
    scanf("%d", &n);
    int parity_odd = 0, parity_even = 0;
    int flag = 1;
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(i == 0){
        parity_even = temp % 2;
      }
      if(i == 1){
        parity_odd = temp % 2;
      }
      if(i % 2){
        if(parity_odd != temp % 2) {
          flag = 0;
        }
      }
      else{
        if(parity_even != temp % 2){
          flag = 0;
        }
      }
    }
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
