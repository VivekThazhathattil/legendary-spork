#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, k;
    scanf("%d %d", &n, &k);
    /* if n even & k odd
     * or 
     * if n odd & k even
     */
    if(
        (n % 2 == 0 && k % 2) ||
        (n % 2 && k % 2 == 0)
      ){
      printf("NO\n");
    }
    /* if n even & k even
     * or
     * if n odd & k odd
     */
    else{
      /* Sum of first k odd numbers = k^2 */
      if(k*k > n)  {
        printf("NO\n");
      }
      else{
        printf("YES\n");
      }
    }
  }
  return 0;
}
