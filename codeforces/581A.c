#include <stdio.h>

int get_min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  int min = get_min(n, m);
  int max = n + m - min;
  printf("%d %d\n", min, (max - min)/2);
  return 0;
}
