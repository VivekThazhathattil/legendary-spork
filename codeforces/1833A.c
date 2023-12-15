#include <stdio.h>
#include <stdlib.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    char* str = 
      (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", str);
    int a[7][7];
    int i, j;
    for(i = 0; i < 7; ++i){
      for(j = 0; j < 7; ++j){
        a[i][j] = 0;
      }
    }
    int count = 0;
    for(i = 0; i < n - 1; ++i){
      if(a[str[i] - 'a'][str[i + 1] - 'a'] == 0){
        a[str[i] - 'a'][str[i + 1] - 'a'] = 1;
        ++count;
      }
    }
    printf("%d\n", count);
    free(str);
  }
  return 0;
}
