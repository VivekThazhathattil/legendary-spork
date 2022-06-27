#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x, input, lesser = 0, equal = 0, greater = 0;
        scanf("%d %d", &n, &x);
        for(int i = 0; i < n; ++i){
            scanf("%d", &input);
            if(input > x)
                ++greater;
            else if(input == x)
                ++equal;
            else
                ++lesser;
        }
        printf((equal > 0 || (greater > 0 && lesser > 0)) ? "YES\n" : "NO\n");
    }
    return 0;
}
