#include <stdio.h>

int main(){
  int a[4], i;
  for(i = 0; i < 4; ++i){
    scanf("%d", &a[i]);
  }
  char s[100001];
  scanf("%s", s);
  i = 0;
  long long sum = 0;
  while(s[i] != '\0'){
    if(s[i] == '1'){
      sum += a[0];
    }
    else if(s[i] == '2'){
      sum += a[1];
    }
    else if(s[i] == '3'){
      sum += a[2];
    }
    else if(s[i] == '4'){
      sum += a[3];
    }
    ++i;
  }
  printf("%lld\n", sum);
  return 0;
}
