#include <stdio.h>

int main(){
  char org[3], test[3];
  scanf("%s", org);
  int t = 5, flag = 0;
  while(t--){
    scanf("%s", test);
    if(org[0] == test[0] || org[1] == test[1]){
      flag = 1;
    }
  }
  if(flag){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}
