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
    int num_people = vabs(a - b)*2;
    
    if(vabs(a - b) <= 1 || c > vabs(a - b)*2) {
      printf("-1\n");
    }
    else if(c > vabs(a - b)){
      printf("%d\n", c - vabs(a - b));
    }
    else{
      printf("%d\n", c + vabs(a - b));
    }
  }
  return 0;
}
