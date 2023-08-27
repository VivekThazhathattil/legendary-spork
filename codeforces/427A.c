/* Idea: If cumulative sum < 0 at any point, add to count */

#include <stdio.h>

int main(){
  int n, i, num;
  int cum_sum = 0, count = 0;
  scanf("%d", &n);
  for(i = 0; i < n; ++i){
    scanf("%d", &num);
    cum_sum += num;
    if(cum_sum < 0){
      cum_sum = 0;
      ++count;
    }
  }
  printf("%d\n", count);
  return 0;
}
