#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int w, h, n;
    scanf("%d %d %d", &w, &h, &n);
    long long int num_twos_h = 1, num_twos_w = 1;
    while(w != 0 && w % 2 == 0){
      num_twos_w *= 2;
      w /= 2; 
    }
    while(h != 0 && h % 2 == 0){
      num_twos_h *= 2;
      h /= 2; 
    }
    if(num_twos_w * num_twos_h >= n){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
