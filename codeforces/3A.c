#include <stdio.h>

int main(){
  char file[2], rank[2];
  scanf("%c%d", file[0], rank[0]);
  scanf("%c%d", file[1], rank[1]);
  printf("The two coordinates are (%c%d) and (%c%d) respectively\n", file[0], rank[0], file[1], rank[1]);
  return 0;
}
