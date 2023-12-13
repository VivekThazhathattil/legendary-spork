#include <stdio.h>
#define NUM_ALFS 26

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    char s[51];
    scanf("%s", s);
    int alf[NUM_ALFS];
    int i;
    for(i = 0; i < NUM_ALFS; ++i){
      alf[i] = 0;
    }
    int num_balloons = 0;
    for(i = 0; i < n; ++i){
      if(alf[s[i] - 'A'] == 0){
        ++alf[s[i] - 'A'];
        num_balloons += 2;
      }
      else{
        ++num_balloons;
      }
    }
    printf("%d\n", num_balloons);
  }
  return 0;
}
