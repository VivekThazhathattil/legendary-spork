#include <stdio.h>

int min_moves_reqd(int m, int n){
  if(m % n == 0)
    return 0;
  if(m < n){
    return n - m;
  }
  return n - (m % n); 
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", min_moves_reqd(a,b));
  }
  return 0;
}
