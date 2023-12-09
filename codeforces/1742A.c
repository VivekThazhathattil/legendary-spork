#include <stdio.h>

int is_satisfied(int a, int b, int c){
  if(a + b == c || b + c == a || c + a == b){
    return 1;
  }
  return 0;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(is_satisfied(a,b,c)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
