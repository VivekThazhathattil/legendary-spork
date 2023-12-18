#include <stdio.h>

int get_equal_elm(int x, int y, int z){
  if(x == y || x == z){
    return x;
  }
  return y;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b, c, flag = 1;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b || b == c || c == a){
      int eq = get_equal_elm(a, b, c);
      int oth = a + b + c - 2*(eq);
      if(oth % 2){
        flag = 0;
      }
    }
    else if(a + b == c || b + c == a || c + a == b){
      flag = 1;
    }
    else{
      flag = 0;
    }
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
