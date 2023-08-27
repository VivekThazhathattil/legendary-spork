#include <stdio.h>

int get_abs(int num){
  if(num < 0){
    return -num;
  }
  return num;
}

int main(){
  int a, b, i, awins = 0, bwins = 0;
  scanf("%d %d", &a, &b);
  for(i = 1; i <= 6; ++i){
    if(get_abs(a - i) < get_abs(b - i)){
      ++awins;
    }
    else if(get_abs(a - i) > get_abs(b - i)){
      ++bwins;
    }
  }
  printf("%d %d %d\n", awins, 6 - (awins + bwins), bwins);
  return 0;
}
