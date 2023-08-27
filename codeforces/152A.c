#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int n, m, i, j;
  scanf("%d %d", &n, &m);
  int* a = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    a[i] = 0;
  }

  char* s = (char*) malloc(sizeof(char) * n * m);

  for(i = 0; i < n; ++i){
    char str[102];
    scanf("%s", str);
    for(j = 0; j < m; ++j){
      s[m*i + j] = str[j];
    }
  }
  
  for(j = 0; j < m; ++j){
    /* find the top marks for each subject */  
    int top_marks = -1;
    for(i = 0; i < n; ++i){
      if(top_marks < s[m*i + j] - '0') {
        top_marks = s[m*i + j] - '0';
      }
    }
    /* Update the topper status for that subject */
    for(i = 0; i < n; ++i){
      if(s[m*i + j] - '0' == top_marks){
        a[i] = 1;
      }
    }
  }

  /* count num successful students */
  int count = 0;
  for(i = 0; i < n; ++i){
    count += a[i];
  }

  printf("%d\n", count);

  free(a);
  free(s);
  return 0;
}
