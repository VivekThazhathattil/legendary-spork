#include <stdio.h>

/* IDEA:
 * ----
 * Sum of internal angles of a
 * polygon Sn = 180*(n - 2), where 
 * n is the number of edges.
 * For a regular polygon, all angles
 * are equal. So n*a = 180 * (n - 2),
 * where a is the angle in degrees.
 * Or (180 - a) * n = 360.
 * Which means 360 % (180 - a) = 0,
 * for a valid angle a.
 */

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int angle;
    scanf("%d", &angle);
    if(angle < 60){
      printf("NO\n");
    }
    else if (360 % (180 - angle) == 0){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
  }
  return 0;
}
