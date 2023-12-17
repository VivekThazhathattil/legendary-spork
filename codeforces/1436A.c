#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, m, temp, i, sum = 0;
    scanf("%d %d", &n, &m);
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      sum += temp;
    }
    if(sum == m){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
