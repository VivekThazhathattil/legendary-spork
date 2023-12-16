#include <stdio.h>

int main(){
  int n, i;
  char str[101];
  scanf("%d", &n);
  scanf("%s", str);
  int count = 0;
  for(i = 0; i < n - 2; ++i){
    if(str[i] == 'x' && str[i + 1] == 'x' && str[i + 2] == 'x'){
      ++count;
    }
  }
  printf("%d\n", count);
  return 0;
}
