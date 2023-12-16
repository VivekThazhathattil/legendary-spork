#include <stdio.h>

int vabs(int n){
  if(n > 0){
    return n;
  }
  return -n;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(vabs(a - b) % (2*c) == 0){
      printf("%d\n", vabs(a - b)/(2*c));
    }
    else{
      printf("%d\n", 1 + vabs(a - b)/(2*c));
    }
  }
  return 0;
}
