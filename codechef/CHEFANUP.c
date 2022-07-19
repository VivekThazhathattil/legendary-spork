#include <stdio.h>
#include <stdlib.h>

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        long long int n, k, l;
        scanf("%lld %lld %lld", &n, &k, &l);
        long long int * ans =
            (long long int *) malloc(sizeof(long long int) * n);
        for(long long int i = 0; i < n; ++i){
            ans[i] = l%k;
            if(ans[i] == 0){
                ans[i] = k;
                l = l/k;
            }
            else{
                l = l/k + 1;
            }
        }
        for(long long int i = n - 1; i >= 0; --i)
            printf("%lld ", ans[i]);
        printf("\n");
        free(ans);
    }
    return 0;
}
