#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int* a = (int*) malloc(sizeof(int) * n);
    int num_odd = 0;
    for(i = 0; i < n; ++i){
      scanf("%d", &(a[i]));
      if(a[i] % 2){
        ++num_odd;
      }
    }
    if((n == num_odd && n % 2 == 0) || num_odd == 0){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
    free(a);
  }
  return 0;
}
