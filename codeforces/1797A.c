#include <stdio.h>

int get_min(int n1, int n2){
  if(n1 < n2) {
    return n1;
  }
  return n2;
}

int is_corner_point(const int row, 
    const int col, const int nrows,
    const  int ncols){
  int ans = 0;
  /* top left */
  ans = (row == 0) && (col == 0);
  /* top right */
  ans =  ans || ((row == 0) && 
      (col == ncols - 1));
  /* bottom left */
  ans = ans || ((row == nrows - 1) && 
      (col == 0));
  /* bottom right */
  ans = ans || ((row == nrows - 1) &&
      (col == ncols - 1));
  return ans;
}

int is_edge_point(const int row, 
    const int col, const int nrows,
    const int ncols){
  int ans = 0;
  /* left edge */
  ans = (col == 0);
  /* right edge */
  ans = ans || (col == ncols - 1);
  /* top edge */
  ans = ans || (row == 0);
  /* bottom edge */
  ans = ans || (row == nrows - 1);
  return ans;
}

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n, m;
    scanf("%d %d", &n, &m);
    int x1, x2, y1, y2;
    scanf("%d %d %d %d", 
        &x1, &y1, &x2, &y2);

    int min = get_min(n, m);
    if(is_corner_point(x1 - 1, y1 - 1, n, m) || 
        is_corner_point(x2 - 1, y2 - 1, n, m)){
      min = get_min(min, 2);
    }
    else if(is_edge_point(x1 - 1, y1 - 1, n, m) ||
        is_edge_point(x2 - 1, y2 - 1, n, m)){
      min = get_min(min, 3);
    }
    
    else{
      min = get_min(min, 4);
    }
    printf("%d\n", min);
  }
  return 0;
}
