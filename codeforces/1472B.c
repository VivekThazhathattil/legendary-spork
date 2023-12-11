#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, sum = 0, temp, odd_pres = 0;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      sum += temp;
      if(temp % 2){
        odd_pres = 1;
      }
    }
    if(sum % 2){
      printf("NO\n");
    }
    else{
      if((sum/2) % 2){
        if(odd_pres){
          printf("YES\n");
        }
        else{
          printf("NO\n");
        }
      }
      else{
        printf("YES\n");
      }
    }
  }
  return 0;
}
