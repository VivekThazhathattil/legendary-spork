#include <stdio.h>

long long int get_pow2(int n){
  long long int res = 1;
  int i;
  for(i = 0; i < n; ++i){
    res *= 2;
  }
  return res;
}

long long int vabs(int n){
  if(n < 0){
    return -n;
  }
  return n;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    long long int wt_left = 0, 
         wt_right = 0;
    //int switcher = 0;
    //for(i = 1; i <= n; i += 2){
    //  if(switcher == 0){
    //    wt_left += get_pow2(i);
    //    wt_right += get_pow2(i + 1);
    //    switcher = 1;
    //  }
    //  else{
    //    wt_left += get_pow2(i + 1);
    //    wt_right += get_pow2(i);
    //    switcher = 0;
    //  }
    //}
    for(i = 1; i <= n/2 - 1; ++i){
      wt_left += get_pow2(i);
    }
    wt_left += get_pow2(n);
    for(i = n/2; i < n; ++i){
      wt_right += get_pow2(i);
    }
    printf("%lld\n", vabs(wt_right - wt_left));
  }
  return 0;
}
