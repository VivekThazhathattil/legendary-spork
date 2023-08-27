#include <stdio.h>

typedef long long int llint;

llint get_min(llint m, llint n){
  if(m < n){
    return m;
  }
  return n;
}

llint get_max(llint m, llint n){
  if(m > n){
    return m;
  }
  return n;
}

int main(){
  llint a, b, c, res = 0, curr_res;
  llint min, max, mid;
  scanf("%lld %lld %lld", &a, &b, &c);

  do{
    curr_res = 0;
    min = get_min(a, get_min(b, c));
    max = get_max(a, get_max(b, c));
    mid = (a + b + c) - (min + max);

    printf("%d %d %d\n", max, mid, min);
    
    curr_res += get_min(2*mid, max)/2;

    max -= curr_res*2;
    mid -= curr_res;

    a = max;
    b = mid;
    c = min;

    res += get_max(0, curr_res);

  }while(curr_res > 0);

  if(a != 0 && b != 0 && c != 0){
    res += get_min(a, get_min(b, c));
  }

  printf("%lld\n", res);

  return 0;
}
