#include <stdio.h>
#include <stdlib.h>

int comp(const void* l, const void* r){
  return *(int*)l - *(int*)r;
}

double vmax(double n1, double n2){
  if(n1 > n2){
    return n1;
  }
  return n2;
}

double vmin(double n1, double n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int n, l, i;
  scanf("%d %d", &n, &l);
  int* a = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    scanf("%d", &a[i]);
  }
  qsort(a, n, sizeof(int), comp);
  double min = vmax(a[0], l - a[n - 1]);
  for(i = 1; i < n; ++i){
    min = vmax(min, ((double)a[i] - (double)a[i - 1])/2);
    //printf("min: %lf, a[%d]: %d, 
    //a[%d]: %d\n", min, i, a[i], i - 1, a[i - 1]);
  }
  printf("%lf\n", min);
  free(a);
  return 0;
}
