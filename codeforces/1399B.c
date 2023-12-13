#include <stdio.h>
#include <stdlib.h>

int max(int n1, int n2){
  if(n1 > n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* a = (int *) malloc(sizeof(int) * n);
    int* b = (int *) malloc(sizeof(int) * n);
    int min_a = 1e9 + 1, min_b = 1e9 + 1;
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
      if(min_a > a[i]){
        min_a = a[i];
      }
    }
    for(i = 0; i < n; ++i){
      scanf("%d", &b[i]);
      if(min_b > b[i]){
        min_b = b[i];
      }
    }
    long long int num_moves = 0;
    for(i = 0; i < n; ++i){
      num_moves += max(a[i] - min_a, b[i] - min_b);
    }
    printf("%lld\n", num_moves);
    free(a);
    free(b);
  }
  return 0;
}
