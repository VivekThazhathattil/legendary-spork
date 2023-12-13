#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, temp, count = 0;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(temp % 2){
        ++count;
      }
    }
    if(count % 2){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
  }
  return 0;
}
