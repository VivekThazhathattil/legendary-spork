#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, k, i, temp, flag = 0;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(temp == k){
        flag = 1;
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
