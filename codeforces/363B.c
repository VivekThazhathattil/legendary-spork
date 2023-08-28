#include <stdio.h>
#include <stdlib.h>

int get_init_sum(const int* a, const int k){
  int sum = 0, i;
  for(i = 0; i < k; ++i){
    sum += a[i];
  }
  return sum;
}

int get_slide_win_beg_idx(const int* a, 
    const int k, const int n, int sum){
  int i = k - 1, min_idx = -1, 
    min = 1000000000;  

  while(i < n){
    if(min > sum){
      min = sum;
      min_idx = i - (k - 1);
    }
    if(i + 1 < n){
      sum = sum - a[i - (k - 1)] + a[i + 1];
    }
    ++i;
  }
  return min_idx + 1;
}

int main(){
  int n, k, i;
  scanf("%d %d", &n, &k);
  int* a = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    scanf("%d", &(a[i]));
  }
  int init_sum = get_init_sum(a, k);
  printf("%d\n", 
      get_slide_win_beg_idx(a, k, n, init_sum));
  free(a);
  return 0;
}
