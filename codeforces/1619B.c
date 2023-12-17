#include <stdio.h>

int cube(long long int num){
  long long int i = 0;
  while(i*i*i <= num){
    if(i*i*i == num){
      return 1;
    }
    ++i;
  }
  return 0;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    long long int i;
    scanf("%d", &n);
    int count = 0;
    for(i = 1; i*i*i <= n; ++i){
      ++count;
    }
    for(i = 1; i*i <= n; ++i){
      if(!cube(i*i)){
        ++count;
      }
    }
    printf("%d\n", count);
  }
}
