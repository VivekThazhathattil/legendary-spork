#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, p0 = 0, p1 = 0;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
      int temp;
      scanf("%d", &temp);
      if((i%2) != (temp%2)){
        if(i%2){
          ++p0;
        }
        else{
          ++p1;
        }
      }
    }
    if(p0 != p1){
      printf("-1\n");
    }
    else{
      printf("%d\n", p0);
    }
  }
  return 0;
}
