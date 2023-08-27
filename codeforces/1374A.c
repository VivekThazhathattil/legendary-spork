// k%x = y => k = mx + y
//
#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int x, y, n;
    scanf("%d %d %d", &x, &y, &n);
    while((n - y)%x && n > 0){
      --n;
    }
    printf("%d\n", n);
  }
  return 0;
}
