#include <stdio.h>

int vmin(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, temp, i;
    int num_odd = 0, num_even = 0;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(temp % 2) {
        ++num_odd;
      }
      else{
        ++num_even;
      }
    }
    printf("%d\n", vmin(num_odd, num_even));
  }
  return 0;
}
