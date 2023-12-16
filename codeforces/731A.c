#include <stdio.h>

int vabs(int n){
  if(n > 0){
    return n;
  }
  return -n;
}

int min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int get_min_dist(char a, char b){
  int src, dest;
  if(a - 'a' < b - 'a'){
    src = a - 'a';
    dest = b - 'a';
  }
  else{
    src = b - 'a';
    dest = a - 'a';
  }
  return min(vabs(src +  (25 - dest) + 1), 
      vabs(dest - src));
}

int main(){
  char str[101];
  scanf("%s", str);
  int sum = 0, i = 0;
  while(str[i] != '\0'){
    if(i == 0){
      sum += get_min_dist('a', str[i]);
    }
    else{
      sum += get_min_dist(str[i-1], str[i]);
    }
    ++i;
  }
  printf("%d\n", sum);
  return 0;
}
