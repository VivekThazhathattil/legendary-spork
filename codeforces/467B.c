#include <stdio.h>
#include <stdlib.h>

int friendable(int x, int y, const int k,
    const int n){
  int count = 0, rem_x, rem_y;
  int mask = 1, mask_itr = 0;
  while((x || y) && (mask_itr < n)){
    rem_x = x & mask;
    rem_y = y & mask;
    if(rem_x != rem_y){
      ++count;
    }
    if(count > k){
      return 0;
    }
    mask *= 2;
    ++mask_itr;
  }
  return 1;
}

int get_num_friends(const int* a, const int m,
    const int k, const int n){
  int i, count = 0;
  for(i = 0; i < m; ++i){
    if(friendable(a[i], a[m], k, n)){
      //printf("%d %d %d\n", a[i], a[m], k);
      ++count;
    }
  }
  return count;
}

int main(){
  int n, m, k, i;
  scanf("%d %d %d", &n, &m, &k);
  int *a = (int*) malloc(sizeof(int) * (m + 1));
  for(i = 0; i < m + 1; ++i){
    scanf("%d", &(a[i]));
  }
  printf("%d\n", get_num_friends(a, m, k, n));
  free(a);
  return 0;
}
