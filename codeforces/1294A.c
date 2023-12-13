#include <stdio.h>

int max(int n1, int n2){
  if(n1 > n2){
    return n1;
  }
  return n2;
}

int min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    while(n > 0){
      if(a == b && a == c){
        if(n % 3 == 0){
          n = 0;
        }
        break;
      }
      int min_num = min(min(a,b),c);
      int max_num = max(max(a,b),c);
      int other = a + b + c - max_num - min_num;
      n -= (max_num - min_num);
      a = max_num;
      b = max_num;
      c = other;
    }
    if(n == 0 &&
        a == b &&
        a == c){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
