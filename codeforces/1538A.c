#include <stdio.h>

int get_min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i, temp;
    int max = -1, max_idx = 0,
        min = 101, min_idx = 0;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(temp > max){
        max = temp;
        max_idx = i + 1;
      }
      if(temp < min){
        min = temp;
        min_idx = i + 1;
      }
    }
    int min1 = max_idx > min_idx 
      ? max_idx  
      : min_idx;
    int min2 = (n + 1 - max_idx) > (n + 1 - min_idx) 
      ? (n + 1 - max_idx) 
      : (n + 1 - min_idx);
    printf("%d\n", 
          get_min(
            get_min(min1, min2), 
            get_min(n + 1 - max_idx + min_idx, 
              n + 1 - min_idx + max_idx)
          )
        );
  }
  return 0;
}
