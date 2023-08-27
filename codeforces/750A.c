/* If no. problems solved = n,
 * 5 * n(n+1)/2 <= 4*60 - k
 * n(n + 1) <= (480 - 2k)/5)
 */

#include <stdio.h>

int main(){
  int m, k, i;
  scanf("%d %d", &m, &k);
  for(i = 1; i <= m; ++i){
    if(i * (i + 1) > (480 - 2*k)/5){
      break;
    }
  }
  printf("%d\n" , i - 1);
  return 0;
}
