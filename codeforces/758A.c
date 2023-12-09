#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i, max = -1;
  scanf("%d", &n);
  int* a = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    scanf("%d", &a[i]);
    if(a[i] > max){
      max = a[i];
    }
  }
  int money_reqd = 0;
  for(i = 0; i < n; ++i){
    money_reqd += max - a[i];
  }
  printf("%d\n", money_reqd);
  free(a);
  return 0;
}
