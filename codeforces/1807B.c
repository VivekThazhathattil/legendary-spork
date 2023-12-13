#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, i;
    scanf("%d", &n);
    int mihai = 0, bianca = 0, temp;
    for(i = 0; i < n; ++i){
      scanf("%d", &temp);
      if(temp % 2){
        bianca += temp;
      }
      else{
        mihai += temp;
      }
    }
    if(mihai > bianca){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
