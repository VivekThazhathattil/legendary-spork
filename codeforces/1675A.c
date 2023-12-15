#include <stdio.h>

int get_rem(int num_animals, int food_pkts){
  if(num_animals > food_pkts){
     return num_animals - food_pkts;
  }
  return 0;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a, b, c, x, y;
    scanf("%d %d %d %d %d", 
        &a, &b, &c, &x, &y);
    int x_rem = get_rem(x, a);
    int y_rem = get_rem(y, b);
    if(x_rem + y_rem <= c){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
