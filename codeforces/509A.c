#include <stdio.h>
#include <stdlib.h>

int get_max(int num){
  int res = 1, i;
  for(i = 0; i < num - 1; ++i){
    res *= 2;
  }
  return res;
}

int main(){
  int n;
  scanf("%d", &n);
  int* tab = (int*) malloc(sizeof(int) * n * n);
  int i, j;
  for(i = 0; i < n; ++i){
    for(j = 0; j < n; ++j){
      if(i == 0 || j == 0){
        tab[(n)*i + j] = 1;
      }
      else{
        tab[(n)*i + j] = 0;
      }
    }
  }

  for(i = 1; i < n; ++i){
    for(j = 1; j < n; ++j){
      tab[(n)*i + j] = 
        tab[(n)*(i - 1) + j] + 
        tab[(n)*i + (j - 1)];
    }
  }

  printf("%d\n", tab[(n)*n - 1]);
  free(tab);
  return 0;
}
