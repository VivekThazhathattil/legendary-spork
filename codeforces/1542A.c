#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, temp, count_odd = 0, i;
    scanf("%d", &n);
    for(i = 0; i < 2*n; ++i){
      scanf("%d", &temp);
      if(temp%2){
        ++count_odd;
      }
    }
    if(count_odd == n){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
  return 0;
}
