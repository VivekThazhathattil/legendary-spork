#include <stdio.h>

int get_min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b;
    scanf("%d %d", &a, &b);
    int min = get_min(a,b);
    if(2*min > a + b - min){
      printf("%d\n", 4*min*min);
    }
    else{
      printf("%d\n", (a + b - min) * (a + b - min));
    }
  }
  return 0;
}
