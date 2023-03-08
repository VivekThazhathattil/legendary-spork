#include<stdio.h>

int main(){
    int t, num1, num2;
    scanf("%d", &t);
    while(t--){
        int pathlen = 0, num1sTurn = 1;
        scanf("%d %d", &num1, &num2);
        while(num1 != num2){
            if(num1sTurn){
                if(num1 > 1){
                    ++pathlen;
                    num1 = num1/2;
                }
                num1sTurn = 0;
            }
            else if(!num1sTurn){
                if(num2 > 1){
                    ++pathlen;
                    num2 = num2/2;
                }
                num1sTurn = 1;
            }
        }
        printf("%d\n", pathlen);
    }
    return 0;
}
