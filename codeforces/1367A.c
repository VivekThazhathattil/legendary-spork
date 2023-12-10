#include <stdio.h>
#include <stdlib.h>

int get_len(char* s){
  int i = 0;
  while(s[i] != '\0'){
    ++i;
  }
  return i;
}

char* get_secret_string(char* s, int n){
  int i, m = n/2 + 1, j = 0;
  char* ss = (char*) malloc(sizeof(char) * (m + 1));
  for(i = 0; i < n - 2; i += 2){
    ss[j] = s[i];
    ++j;
  }
  ss[m - 2] = s[n - 2];
  ss[m - 1] = s[n - 1];
  ss[m] = '\0';
  return ss;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char b[101];
    scanf("%s", b);
    int len = get_len(b);
    char* ss = get_secret_string(b, len);
    printf("%s\n", ss);
    free(ss);
  }
  return 0;
}
