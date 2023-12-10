#include <stdio.h>

int get_filtered_string_length(char* s){
  int count = 0, i = 0;
  while(s[i] != '\0'){
    if(s[i] == 'Q' || s[i] == 'A'){
      ++count;
    }
    ++i;
  }
  return count;
}

char* get_filtered_string(char* s, int n){
  char* ss = (char*) malloc(sizeof(char) * (n + 1));
  int i = 0, j = 0;
  while(s[i] != '\0'){
    if(s[i] == 'A' || s[i] == 'Q'){
      ss[j] = s[i];
    }
  }
  ss[n - 1] = '\0';
  return ss;
}

int get_num_subsequences(char* s, int n){
  int l_idx = 0; 
  while(l_idx < n - 2){
    if(s[i] != 'Q'){
      ++l_idx;
    }
    else{
      int i = l_idx + 1;
    }
  }
}

int main(){
  char s[101];
  scanf("%s", s);
  int len = get_filtered_string_length(s);
  char* fstr = get_filtered_string(s, len);
  int num_subsq = get_num_subsequences(fstr, len);
  printf("%d\n", n);
  free(fstr);
  return 0;
}
