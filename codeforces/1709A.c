#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int x, i;
    scanf("%d", &x);
    int a[3];
    for(i = 0; i < 3; ++i){
      scanf("%d", &a[i]);
    }
    if(a[x - 1] == 0){
      printf("NO\n");
    }
    else if(a[a[x - 1] - 1] == 0){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
  }
  return 0;
}
