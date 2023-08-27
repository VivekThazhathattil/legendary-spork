#include <stdio.h>

int get_min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int get_max(int n1, int n2){
  if(n1 > n2){
    return n1;
  }
  return n2;
}

int main(){
  int a, b, c; 
  scanf("%d %d %d", &a, &b, &c);
  int max = get_max(a, get_max(b, c));
  int min = get_min(a, get_min(b, c));
  printf("%d\n", max - min);
}
