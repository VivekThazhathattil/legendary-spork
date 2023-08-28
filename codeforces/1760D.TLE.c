/* sliding window */

#include <stdio.h>
#include <stdlib.h>

int lbound_safe(const int* a,
  const int l){
  if(l == 0){
    return 1;
  }
  return a[l - 1] > a[l];
}

int rbound_safe(const int* a,
    const int n, const int r){
  if(r == n - 1){
    return 1;
  }
  return a[r + 1] > a[r];
}

int all_elements_equal(const int* a,
    const int l, const int r){
  int i;
  int val = a[l];
  for(i = l + 1; i <= r; ++i){
    if(val != a[i]){
      return 0;
    }
  }
  return 1;
}

int valleys_found(const int w, 
    const int* a, const int n){

  int num_valleys = 0;
  int l = 0;
  int r = l + w;

  while(r < n){
    if(
      lbound_safe(a, l) &&
      rbound_safe(a, n, r) &&
      all_elements_equal(a, l, r)
    ){
      ++num_valleys;
    }
    ++l;
    ++r;
  }
  return num_valleys;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* a = 
      (int*) malloc(sizeof(int) * n);

    for(i = 0; i < n; ++i){
      scanf("%d", &(a[i]));
    }

    int num_valleys = 0, width = 0;
    while(width < n){
      num_valleys += 
        valleys_found(width, a, n);
      if(num_valleys > 1){
        break;
      }
      ++width;
    }

    free(a);

    if(num_valleys == 1){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
