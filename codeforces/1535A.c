#include <stdio.h>

int max(int n1, int n2){
  if(n1 > n2){
    return n1;
  }
  return n2;
}

int min(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int a[4], i;
    for(i = 0; i < 4; ++i){
      scanf("%d", &a[i]);
    }
    if(max(a[2], a[3]) < min(a[0], a[1]) || 
        max(a[0], a[1]) < min(a[2], a[3])){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
  }
  return 0;
}
