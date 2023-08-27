#include <stdio.h>

int main(){
  int n, i, curr, best = -1, worst = -1;
  int num_amaz_perf = 0;
  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    scanf("%d", &curr);
    if(best < 0){
      best = curr;
      worst = curr;
    }
    else{
      if(curr > best){
        best = curr;
        ++num_amaz_perf;
      }
      else if(curr < worst){
        worst = curr;
        ++num_amaz_perf;
      }
    }
  }
  printf("%d\n", num_amaz_perf);
  return 0;
}
