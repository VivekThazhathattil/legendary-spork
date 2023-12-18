#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, s, r, i;
    scanf("%d %d %d", &n, &s, &r);
    printf("%d ", s - r);
    for(i = 0; i < n - 1; ++i){
      printf("%d ", r/(n - 1 - i));
      r -= r/(n - 1 -i);
    }
    printf("\n");
  }
  return 0;
}
