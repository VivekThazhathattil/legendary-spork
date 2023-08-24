#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, i;
  long long int num = 0;
  scanf("%d", &n);
  char* s = (char*) malloc(sizeof(char) * (n + 1));
  scanf("%s", s);
  for(i = 0; i < n; ++i){
    if( (s[i] - '0') % 2 == 0){
      num += (i + 1);
    }
  }
  printf("%lld\n", num);
  free(s);
  return 0;
}
