#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    if(a < 0)
        a = -a;
    if(b < 0)
        b = -b;
    while( b!=0 ){
        a %= b;
        if(a == 0) 
            return b;
        b %= a;
    }
    return a;
}



int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, res = 0;
        scanf("%d", &n);

        int *arr = (int *) malloc(sizeof(int) * n);
        int *bef_arr = (int *) calloc(n, sizeof(int));
        int *aft_arr = (int *) calloc(n, sizeof(int));

        for(int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
            bef_arr[i] = (i == 0) ?  arr[i] : gcd(bef_arr[i - 1], arr[i]);
        }
        for(int i = n - 1; i >= 0; --i)
            aft_arr[i] = (i == n - 1) ? arr[i] : gcd(aft_arr[i + 1], arr[i]);
        for(int i = 0; i < n; ++i){
            int check = (i == 0) 
                ? aft_arr[i + 1] 
                : (i == n - 1 
                        ? bef_arr[i - 1] 
                        : gcd(bef_arr[i - 1], aft_arr[i + 1]));
            if(check > 1)
                ++res;
        }
        printf("%d\n", res);

        free(arr);
        free(bef_arr);
        free(aft_arr);
    }
    return 0;
}
