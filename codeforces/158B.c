#include <stdio.h>
#include <stdlib.h>

int comp(const void* n1, const void* n2){
  return *(int*)n1 - *(int*)n2;
}

int count_cars(const int* a, const int n){
  int l = 0, r = n - 1, count = 0;
  //int itr = -1;
  while(l < n && r >= 0 && l <= r){
    //++itr;
    if(l == r || a[r] + a[l] == 4){
      ++count;
      ++l;
      --r;
    }
    else if(a[r] + a[l] < 4){
      int carry = a[r];
      while(l < r && carry + a[l] <= 4){
        carry += a[l];
        ++l; 
        //printf("itr:%d, l:%d\n", itr, l);
      }
      ++count;
      --r;
    }
    else{
      ++count;
      --r;
    }
  }
  return count;
}

int main(){
  int n, i;
  scanf("%d", &n);
  int* a = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    scanf("%d", &(a[i]));
  }

  qsort(a, n, sizeof(int), comp);

  int count = count_cars(a, n);
  printf("%d\n", count);
  free(a);
  return 0;
}
