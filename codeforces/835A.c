#include <stdio.h>

int main(){
  int n, v1, v2, t1, t2;
  scanf("%d %d %d %d %d", &n, &v1, &v2, &t1, &t2);
  if(v1*n + 2*t1 < v2*n + 2*t2){
    printf("First\n");
  }
  else if(v1*n + 2*t1 > v2*n + 2*t2){
    printf("Second\n");
  }
  else{
    printf("Friendship\n");
  }
  return 0;
}
