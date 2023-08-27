#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    char str[52];
    int map[3], i;
    scanf("%s", str);
    map[0] = 0; map[1] = 0; map[2] = 0;
    for(i = 0; str[i] != '\0'; ++i){
      map[str[i] - 'A']++;
    }
    if(map[0] + map[2] != map[1]){
      printf("NO\n");
    }
    else{
      printf("YES\n");
    }
  }
  return 0;
}
