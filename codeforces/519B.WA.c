#include <stdio.h>
#include <stdlib.h>

int comp(const void* n1, const void* n2){
  return *(int*)n1 - *(int*)n2;
}

int get_missing_elm(const int* a, 
    const int* b, const int n){
  int mid, la = 0, ra = n - 1;
  while(la <= ra){
    mid = (la + ra)/2;
    if(mid == n - 1){
      return a[n - 1];
    }
    else if(a[mid] == b[mid]){
      la = mid + 1;
    }
    else{
      ra = mid - 1;
    }
  }
  return a[ra + 1];
}

int get_missing_elm_alt(const int* a,
    const int*b, const int n){
  int i;
  for(i = 0; i < n - 1; ++i){
    if(a[i] != b[i]){
      return a[i];
    }
  }
  return a[n - 1];
}

int main(){
  int n, i;
  scanf("%d", &n);
  int *a = (int*) malloc(sizeof(int) * n);

  for(i = 0; i < n; ++i){
    scanf("%d", &(a[i]));
  }
  qsort(a, n, sizeof(int), comp);

  int *b = (int*) malloc(sizeof(int) * (n - 1));
  for(i = 0; i < n - 1; ++i){
    scanf("%d", &(b[i]));
  }
  qsort(b, n - 1, sizeof(int), comp);

  printf("%d\n", get_missing_elm_alt(a, b, n));

  free(a);

  /* do the same for b and c */
  int *c = (int*) malloc(sizeof(int) * (n - 2));
  for(i = 0; i < n - 2; ++i){
    scanf("%d", &(c[i]));
  }
  qsort(c, n - 2, sizeof(int), comp);

  printf("%d\n", get_missing_elm(b, c, n - 1));

  free(b);
  free(c);
  return 0;
}

