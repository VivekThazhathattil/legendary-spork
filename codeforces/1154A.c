#include <stdio.h>

int get_max(int n1, int n2){
  if(n1 > n2){
    return  n1;
  }
  return n2;
}

int main(){
  int a[4], i;
  scanf("%d %d %d %d", &(a[0]), 
      &(a[1]), &(a[2]), &(a[3]));
  int max = get_max(a[0], 
      get_max(a[1], get_max(a[2], a[3])));
  for(i = 0; i < 4; ++i){
    if(max != a[i]){
      printf("%d ", max - a[i]);
    }
  }
  printf("\n");
  return 0;
}
