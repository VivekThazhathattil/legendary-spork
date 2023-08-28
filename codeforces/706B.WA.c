#include <stdio.h>
#include <stdlib.h>

int comp(const void* n1, const void* n2){
  return *(int*)n1 - *(int*)n2;
}

int get_num_shops(const int n, 
    const int* a, const int k){

  if(k >= a[n-1]){
    return n;
  }

  if(k < a[0]){
    return 0;
  }

  if(k == a[0]){
    return 1;
  }

  /* binary search */

  int mid, l = 0, r = n - 1;

  while(l < n && r >= 0 && l <= r){
    mid = (l + r)/2;
    if(k > a[mid]){
      l = mid + 1;
    }
    else if(k < a[mid]){
      r = mid - 1;
    }
    else{
      return mid + 1;
    }
  }

  if(k >= a[r]){
    return r + 1;
  }
  return r;
}

int main(){
  int num_shops, num_days, i;
  scanf("%d", &num_shops);

  int* bottle_prices = 
    (int*) malloc(sizeof(int) * num_shops);
  for(i = 0; i < num_shops; ++i){
    scanf("%d", &(bottle_prices[i]));
  }

  scanf("%d", &num_days);
  int* coins = 
    (int*) malloc(sizeof(int) * num_days);
  for(i = 0; i < num_days; ++i){
    scanf("%d", &(coins[i]));
  }

  qsort(bottle_prices, num_shops, 
      sizeof(int), comp);

  for(i = 0; i < num_days; ++i){
    int ans = get_num_shops(num_shops, 
      bottle_prices, coins[i]);
    printf("%d\n", ans);
  }

  free(coins);
  free(bottle_prices);
  return 0;
}
