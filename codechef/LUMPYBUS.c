#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int compFun(const void *num1, const void *num2){
    return (*(ll *)num1 > *(ll *)num2) - (*(ll *)num1 < *(ll *)num2);
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, count = 0;
        ll p, q;
        scanf("%lld %lld %lld", &n, &p, &q);
        ll *arr = (ll *) malloc(sizeof(ll) * n);
        for(ll i = 0; i < n; ++i)
            scanf("%lld", &arr[i]);
        qsort(arr, n, sizeof(ll), compFun);
        for(ll i = 0; i < n; ++i){
            if(p == 0 && q == 0)
                break;
            if(arr[i] - 2*q >= 0){
                if(p >= arr[i] - 2*q){
                    p = p - (arr[i] - 2*q);
                    q = 0;
                    ++count;
                }
            }
            else{
                if((2*q - arr[i])%2){
                    if(p > 0){
                        --p;
                        q -= arr[i] / 2;
                        ++count;
                    }
                }
                else{
                    q -= arr[i] / 2;
                    ++count;
                }
            }
        }
        printf("%lld\n", count);
        free(arr);
    }
    return 0;
}
