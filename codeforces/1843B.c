#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, ops = 0;
    scanf("%d", &n);
    int* a = 
      (int*) malloc(sizeof(int) * n);
    int i;
    long long int sum = 0;
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
      sum += a[i] < 0 ? -a[i] : a[i];
    }
    i = 0;
    while(1){
      if(i >= n){
        break;
      }
      if(a[i] < 0) {
        ++ops;
        while(i < n && a[i] <= 0){
          ++i;
        }
      }
      ++i;
    }
    printf("%lld %d\n", sum, ops);
    free(a);
  }
  return 0;
}
