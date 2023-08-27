#include <stdio.h>
#include <stdlib.h>

int comp(const void* num1, const void* num2){
  return *(int*)num1 - *(int*)num2;
}

/* 1 4 3 4 3 2 4 1 */
/* 1 1 2 3 3 4 4 4 */
int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, *arr, i, count = 1, mval;
    scanf("%d", &n);
    arr = (int*) malloc(sizeof(int) * n);
    for(i = 0; i < n; ++i){
      scanf("%d", &(arr[i]));
    }
    qsort(arr, n, sizeof(int), comp);
    mval = arr[0];
    i = 1;
    while(i < n){
      while(i < n && arr[i] == mval){
        ++i;
        ++count;
      }
      if(count > 2 || i >= n){
        break;
      }
      else{
        count = 1;
        mval = arr[i];
        ++i;
      }
    }
    if(count > 2){
      printf("%d\n", mval);
    }
    else{
      printf("-1\n");
    }
    free(arr);
  }
  return 0;

}
