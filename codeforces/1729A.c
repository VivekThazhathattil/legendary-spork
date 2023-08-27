#include <stdio.h>

int get_abs(int num){
  if(num < 0){
    return -num;
  }
  return num;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b, c, e1 = 0, e2 = 0; 
    scanf("%d %d %d", &a, &b, &c);
    if((e1 = get_abs(a - 1)) > (e2 = get_abs(b - c) + get_abs(c - 1))){
      printf("2\n");
    }
    else if(e1 < e2){
      printf("1\n");
    }
    else{
      printf("3\n");
    }
  }
  return 0;
}
