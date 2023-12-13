#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int win_idx = 0, a, b, max = -1, i;
    for(i = 0; i < n; ++i){
      scanf("%d %d", &a, &b);
      if(a <= 10){
        if(max < b){
          max = b;
          win_idx = i + 1;
        }
      }
    }
    printf("%d\n", win_idx);
  }
  return 0;
}
