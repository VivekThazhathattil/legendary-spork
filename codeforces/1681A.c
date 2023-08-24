#include <stdio.h>

int main(){
  int t, na, nb;
  int num, i;

  scanf("%d", &t);
  while(t--){
    int maxa = -1, maxb = -1;
    scanf("%d", &na);
    for(i = 0; i < na; ++i){
      scanf("%d", &num);
      if(num > maxa){
        maxa = num;
      }
    }

    scanf("%d", &nb);
    for(i = 0; i < nb; ++i){
      scanf("%d", &num);
      if(num > maxb){
        maxb = num;
      }
    }

    if(maxa >= maxb){
      printf("Alice\n");
    }
    else{
      printf("Bob\n");
    }
    
    if(maxa <= maxb){
      printf("Bob\n");
    }
    else{
      printf("Alice\n");
    }
  }
  return 0;
}
