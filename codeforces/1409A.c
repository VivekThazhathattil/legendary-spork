#include <stdio.h>

int get_abs(int num){
  if(num < 0)
    return -num;
  return num;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b;
    scanf("%d %d", &a, &b);
    a = get_abs(b - a);
    int num_moves = 0;
    num_moves += a/10;
    a = a%10;
    if(a != 0)
      num_moves++;
    printf("%d\n",num_moves);
  }
  return 0;
}
