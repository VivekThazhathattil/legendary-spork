#include <stdio.h>
#include <stdlib.h>

int min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int comp(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* a = (int*) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comp);

    /*
    printf("org array sorted:\n");
    for(i = 0; i < n; ++i){
      printf("%d ", a[i]);
    }
    printf("\n");
    */

    int count = 0, ci = 0, curr = a[0];
    int *counts = (int*) calloc(n, sizeof(int));
    for(i = 0; i < n; ++i){
      if(curr == a[i]){
        ++count;
      }
      else{
        counts[ci] = count;
        count = 1;
        curr = a[i];
        ++ci;
      }
    }

    counts[ci] = count;
    qsort(counts, n, sizeof(int), comp);

    /*
    printf("counts array:\n");
    for(i = 0; i < n; ++i){
      printf("%d ", counts[i]);
    }
    printf("\n");
    */

    int num_dels = 0;
    for(i = n - 1; i >= 1; --i){
      int mmin = min(counts[i], counts[i - 1]);
      if(mmin > 0){
        num_dels += 2 * (mmin - 1);
        counts[i] -= (mmin - 1);
        if(counts[i - 1] < 2 && counts[i] > 2){
          num_dels += (counts[i] % 2 == 0)
            ? counts[i]
            : counts[i] - 1;
          counts[i] = counts[i] % 2;
        }
        counts[i - 1] -= (mmin - 1);
      }
    }
    if(counts[i - 1] < 2 && counts[i] > 2){
      num_dels += (counts[i] % 2 == 0)
        ? counts[i]
        : counts[i] - 1;
      counts[i] = counts[i] % 2;
    }
    printf("%d\n", n - num_dels);
    free(counts);
    free(a);
  }
  return 0;
}
