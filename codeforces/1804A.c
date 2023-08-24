#include<stdio.h>

int get_abs(int num){
  if(num < 0)
    return -num;
  return num;
}

int get_min(int num1, int num2){
  if(num1 < num2)
    return num1;
  return num2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b;
    scanf("%d %d", &a, &b);
    a = get_abs(a);
    b = get_abs(b);
    int min = get_min(a, b);
    if(a == b){
      printf("%d\n", a + b);
    }
    else{
      printf("%d\n", 
          2*min + 1 + 2*(a + b - 2*min - 1));
    }
  }
  return 0;
}
