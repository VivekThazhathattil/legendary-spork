#include <stdio.h>
#include <stdlib.h>

int comp(const void* l, const void* r){
  return *(int*)r - *(int*)l;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[3][3];
    scanf("%s", s[0]);
    scanf("%s", s[1]);
    int alf[26], i;
    for(i = 0; i < 26; ++i){
      alf[i] = 0;
    }
    ++alf[s[0][0] - 'a'];
    ++alf[s[0][1] - 'a'];
    ++alf[s[1][0] - 'a'];
    ++alf[s[1][1] - 'a'];
    qsort(alf, 26, sizeof(int), comp);
    if(alf[0] == 1){
      printf("3\n");
    }
    else if(alf[0] == 2){
      if(alf[1] == 2){
        printf("1\n");
      }
      else{
        printf("2\n");
      }
    }
    else if(alf[0] == 3){
      printf("1\n");
    }
    else{
      printf("0\n");
    }
  }
  return 0;
}
