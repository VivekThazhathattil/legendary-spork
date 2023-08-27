/* idea: Put 1s until median, then find sum - [m/2]*/

#include <stdio.h>
int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, s; 
    scanf("%d %d", &n, &s);
    if(n % 2){
      printf("%d\n", (s - n/2)/(n - n/2));
    }
    else{
      printf("%d\n", (s - n/2 + 1)/(n - n/2 + 1));
    }
  }
  return 0;
}
