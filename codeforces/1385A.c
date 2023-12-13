#include <stdio.h>

int max(int n1, int n2){
  if(n1 > n2){
    return n1;
  }
  return n2;
}

int first_max(int n1, int n2, int n3){
  return max(max(n1, n2), n3);
}

int second_max(int n1, int n2, int n3){
  if(n1 != first_max(n1, n2, n3)){
    return n1;
  }
  else if(n2 != first_max(n1, n2, n3)){
    return n2;
  }
  return n3;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(max(x,y) == max(y,z) && max(x,y) == max(x,z)){
      printf("YES\n");
      printf("%d %d %d\n",
          first_max(x,y,z), 
          second_max(x,y,z),
          second_max(x,y,z));
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
