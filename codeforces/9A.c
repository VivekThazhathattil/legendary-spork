#include <stdio.h>

int maximum(int n1, int n2){
  if (n1 > n2){
    return n1;
  }
  return n2;
}

int main(){
  int y, w;
  scanf("%d %d", &y, &w);
  int ntor = 6 - maximum(y,w) + 1;
  if(ntor == 1 || ntor == 5){
    printf("%d/6\n", ntor);
  }
  else if(ntor == 2){
    printf("1/3\n");
  }
  else if(ntor == 3){
    printf("1/2\n");
  }
  else if(ntor == 4){
    printf("2/3\n");
  }
  else if(ntor == 6){
    printf("1/1\n");
  }
  else{
    printf("0/1\n");
  }
  return 0;
}
