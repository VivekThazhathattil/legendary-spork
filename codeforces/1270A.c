#include <stdio.h>

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int nm, n, m, i, maxa = -1, maxb = -1;
    scanf("%d %d %d", &nm, &n, &m);
    for(i = 0; i < n; ++i){
      scanf("%d", &nm);
      if(nm > maxa)
        maxa = nm;
    }

    for(i = 0; i < m; ++i){
      scanf("%d", &nm);
      if(nm > maxb)
        maxb = nm;
    }
    if(maxa > maxb){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
