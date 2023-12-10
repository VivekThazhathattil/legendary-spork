#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int k;
    scanf("%d", &k);
    int count = 0, curr_num = 0;
    while(count < k){
      ++curr_num;
      if(curr_num % 3 != 0 && curr_num % 10 != 3){
        ++count;
      }
    }
    printf("%d\n", curr_num);
  }
  return 0;
}
