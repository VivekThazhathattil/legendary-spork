#include <stdio.h>
#include <stdlib.h>

int solver(char* str, int n){
  char comp[5] = "MEOW";
  int count, i = 0, k = 0;
  while(k < 4 && i < n){
    count = 0;
    while(i < n && (str[i] == comp[k] || 
        str[i] == comp[k] - 'A' + 'a')){
      //printf("str[%d] = %c\n",i, str[i]);
      ++count;
      ++i;
    }
    if(count < 1){
      return 0;
    }
    ++k;
  }
  if(i >= n && k >= 4){
    return 1;
  }
  return 0;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    char* str = 
      (char*) malloc(sizeof(char) * (n + 1));
    scanf("%s", str);
    if(!solver(str, n)){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
    free(str);
  }
  return 0;
}
