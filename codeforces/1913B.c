#include <stdio.h>
#define LEN 200001

int vabs(int n){
  if(n > 0){
    return n;
  }
  return -n;
}

int get_len(char* s){
  int i = 0;
  while(s[i] != '\0'){
    ++i;
  }
  return i;
}

int solve(char* s){
  int count0 = 0, count1 = 0, i = 0;
  while(s[i] != '\0'){
    if(s[i] == '0') {
      ++count0;
    }
    else{
      ++count1;
    }
    ++i;
  }
  return vabs(count0 - count1);
}

int get_0_idx(int idx, int n, char *a){
  while(idx < n && a[idx] != '0'){
    ++idx;
  }
  return idx;
}

int get_1_idx(int idx, int n, char *a){
  while(idx < n && a[idx] != '1'){
    ++idx;
  }
  return idx;
}

int solve_correct(char* s){
  int n = get_len(s);
  //printf("LEN: %d\n", n);
  char t[LEN];
  int i, j = 0;
  for(i = 0; i < n; ++i){
    t[i] = 'a';
  }
  i = 0;
  while(1){
    i = get_0_idx(i, n, s);
    if(i >= n){
      break;  
    }
    j = get_1_idx(j, n, s);
    if(j >= n){
      break;
    }
    //printf("i:%d, j:%d\n", i, j);
    t[i] = '1';
    t[j] = '0';
    ++i;
    ++j;
  }
  int count = 0;
  //printf("s:%s\n", s);
  //printf("t:%s\n", t);
  for(i = 0, j = 0; i < n && j < n; ++i, ++j){
    if(t[j] == 'a'){
      break;
    }
    if(s[i] != t[j]){
      ++count;
    }
  }
  return count;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[LEN];
    scanf("%s", s);
    int n = get_len(s);
    if(n == 1){
      printf("1\n");
    }
    else{
      printf("%d\n", n - solve_correct(s));
    }
  }
  return 0;
}
