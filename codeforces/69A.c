#include <stdio.h>

int main(){
  int n, i;
  scanf("%d", &n);
  int sumx = 0, sumy = 0, sumz = 0;
  for(i = 0; i < n; ++i){
    int xi, yi, zi;
    scanf("%d %d %d", &xi, &yi, &zi);
    sumx += xi;
    sumy += yi;
    sumz += zi;
  }
  if(sumx == 0 && sumy == 0 && sumz == 0){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
