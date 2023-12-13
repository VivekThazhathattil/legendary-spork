#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, x;
    scanf("%d %d", &n, &x);
    if(n <= 2){
      printf("1\n");
    }
    else{
      int start_num = 3;
      int end_num = 3 + (x - 1);
      int floor_num = 2;
      while(!(start_num <= n && n <= end_num)){
        start_num = end_num + 1;
        end_num = end_num + x;
        ++floor_num;
      }
      printf("%d\n", floor_num);
    }
  }
  return 0;
}
