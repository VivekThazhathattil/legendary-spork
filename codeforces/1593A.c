#include <stdio.h>

int get_max(int n1, int n2){
  if(n1 > n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a[3], i;
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int max = get_max(get_max(a[1],a[2]),a[0]);
    int max_count = 0;
    if(max == a[0]){
      ++max_count;
    }
    if(max == a[1]){
      ++max_count;
    }
    if(max == a[2]){
      ++max_count;
    }

    if(max_count == 1){
      for(i = 0; i < 3; ++i){
        if(max > a[i]){
          printf("%d ", max - a[i] + 1);
        }
        else{
          printf("0 ");
        }
      }
      printf("\n");
    }
    else{
      for(i = 0; i < 3; ++i){
        if(max > a[i]){
          printf("%d ", max - a[i] + 1);
        }
        else{
          printf("1 ");
        }
      }
      printf("\n");
    }
  }
  return 0;
}
