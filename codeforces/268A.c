#include <stdio.h>

int main(){
  int n, h[30], a[30], i, j, count = 0;
  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    scanf("%d %d", &(h[i]), &(a[i]));
  }
  for(i = 0; i < n; ++i){
    for(j = 0; j < n; ++j){
      if(i != j){
        if(h[i] == a[j]){
          ++count;
        }
      }
    }
  }
  printf("%d\n", count);
  return 0;
}
