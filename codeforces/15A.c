#include <stdio.h>
#include <stdlib.h>

typedef struct HOUSE_s{
  int x;
  int a;
} house_t;

int comp(const void* n1, const void* n2){
  return ((house_t*)n1)->x - ((house_t*)n2)->x;
}

int main(){
  int n, t, i, count = 2;
  scanf("%d %d", &n, &t);
  house_t* b = (house_t*) malloc(sizeof(house_t) * n);
  for(i = 0; i < n; ++i){
    scanf("%d %d", &(b[i].x), &(b[i].a));
  }
  qsort(b, sizeof(b), n, comp);

  for(i = 0; i < n; ++i){
    printf("%d ", b[i].x);
  }
  printf("\n");

  for(i = 0; i < n - 1; ++i){
    int left_bound  = b[i].x + b[i].a/2;
    int right_bound = b[i + 1].x - b[i + 1].a/2;
    if(right_bound - left_bound > t){
      count += 2;
    }
    else if(right_bound - left_bound == t){
      count += 1;
    }
  }
  printf("%d\n", count);
  free(b);
  return 0;
}
