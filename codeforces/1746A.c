#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, k, i, val, ans = 0;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; ++i){
      scanf("%d", &val);
      if(val == 1){
        ans = 1;
      }
    }
    if(ans){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
