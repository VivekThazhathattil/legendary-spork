#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, curr, prev = -1, height = 1;
    scanf("%d", &n);
    while(n--){
      scanf("%d", &curr);
      if(curr){
        if(prev > 0){
          height += 5;
        }
        else{
          height += 1;
        }
      }
      else{
        if(prev == 0){
          height = -50505050;
        }
      }
      prev = curr;
    }
    if(height > 0){
      printf("%d\n", height);
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}
