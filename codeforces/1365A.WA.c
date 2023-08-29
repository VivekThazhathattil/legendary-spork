/* Idea: Find the minimum dimension (rows or cols).
 * For the minimum dimension, say its rows, find the 
 * number of available rows. If odd, Ashish wins,
 * else Vivek wins.
 */

#include <stdio.h>
#include <stdlib.h>

int get_min(const int n1, const int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int print_conditional(const int truth){
  if(truth){
    printf("Ashish\n");
  }
  else{
    printf("Vivek\n");
  }
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, m, i, j;
    int marked_rows = 0, marked_cols = 0;
    scanf("%d %d", &n, &m);
    int* a = 
      (int*) malloc(sizeof(int) * n * m);

    for(i = 0; i < n; ++i){
      for(j = 0; j < m; ++j){
        scanf("%d", &(a[m*i + j]));
      }
    }

    /* update marked_rows */
    for(i = 0; i < n; ++i){
      for(j = 0; j < m; ++j){
        if(a[m*i + j]){
          ++marked_rows;
          break;
        }
      }
    }

    /* update marked_cols */
    for(j = 0; j < m; ++j){
      for(i = 0; i < n; ++i){
        if(a[n*j + i]){
          ++marked_cols;
          break;
        }
      }
    }

    if(n < m) {
      print_conditional((n - marked_rows) % 2);
    }
    else if(n > m){
      print_conditional((m - marked_cols) % 2);
    }
    else{
      print_conditional(
          get_min(n - marked_rows, 
          m - marked_cols) % 2);
    }

    free(a);
  }
  return 0;
}
