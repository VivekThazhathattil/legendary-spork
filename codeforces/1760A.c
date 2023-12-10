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
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min = get_min(get_min(a,b), c);
    int max = get_max(get_max(a,b), c);
    printf("%d\n", a + b + c - min - max);
  }
  return 0;
}
