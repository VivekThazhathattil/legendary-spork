#include <stdio.h>
#include <stdlib.h>

typedef struct STD_T{
  int skill, idx;
} STD_t;

int comp_fun(const void* l, const void* r){
  return (*(STD_t*)l).skill - (*(STD_t*)r).skill;
}

int minimum(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int n, i, j;
  scanf("%d", &n);
  STD_t* arr = (STD_t*) malloc(sizeof(STD_t) * n);
  int num_prog = 0, num_pe = 0, num_math = 0;
  for(i = 0; i < n; ++i){
    scanf("%d", &(arr[i].skill));
    arr[i].idx = i + 1;
    if(arr[i].skill == 1){
      ++num_prog;
    }
    else if(arr[i].skill == 2){
      ++num_math;
    }
    else{
      ++num_pe;
    }
  }
  int min = minimum(minimum(num_prog, num_math), num_pe);
  printf("%d\n", min);
  qsort(arr, n, sizeof(STD_t), comp_fun);
  for(i = 0; i < min; ++i){
    printf("%d %d %d\n", arr[i].idx, arr[i + num_prog].idx, arr[i + num_prog + num_math].idx);
  }
  return 0;
}
