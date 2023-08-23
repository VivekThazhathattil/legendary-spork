#include <stdio.h>

typedef struct Coord{
    int x, y;   
} Coord;

int main(){
    /* path doesn't exist if 
     * 1. ax lies between bx and cx 
     * 2. ay lies between by and cy
     * 3. (bx, by) and (cx, cy) separated by any of the four lines:
     * 3a. (a_{m+k}, a_{n+k})
     * 3b. (a_{m-k}, a_{n+k})
     * 3c. (a_{m-k}, a_{n-k})
     * 3d. (a_{m+k}, a_{n-k})
     * */
    /* Idea: Convert the chessboard into cartesian system with queen as origin */

    int n;
    scanf("%d", &n);
    int flag = 1;
    Coord a, b, c;

    /* accept input */
    scanf("%d %d", &a.x, &a.y);
    scanf("%d %d", &b.x, &b.y);
    scanf("%d %d", &c.x, &c.y);

    b.x -= a.x;
    b.y -= a.y;
    c.x -= a.x;
    c.y -= a.y;

    //int lilX = b.x <= c.x ? b.x : c.x;
    //int lilY = b.y <= c.y ? b.y : c.y;
    //int bigX = b.x <= c.x ? c.x : b.x; 
    //int bigY = b.y <= c.y ? c.y : b.y; 

    if(
        (lilX <= a.x && a.x <= bigX) ||  /* check condition 1 */
        (lilY <= a.y && a.y <= bigY) ||  /* check condition 2 */
        
      )
    return 0;
}
