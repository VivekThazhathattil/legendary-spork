#include <stdio.h>
#include <stdlib.h>

int vabs(int n){
  if(n > 0){
    return n;
  }
  return -n;
}

int vmin(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int n;
  scanf("%d", &n);
  char *s = (char*) malloc(sizeof(char) * (n + 1));
  char *t = (char*) malloc(sizeof(char) * (n + 1));
  scanf("%s", s);
  scanf("%s", t);
  int i, sum = 0;
  for(i = 0; i < n; ++i){
    sum += vmin(
          vmin(vabs(t[i] - s[i]), 
          vabs(10 - t[i] + s[i])),
          vabs(10 - s[i] + t[i]));
  }
  printf("%d\n", sum);
  free(s);
  free(t);
  return 0;
}
