#include <stdio.h>

typedef long long int ll;

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, m, a_inc, d_inc, a_init, d_init;
        scanf("%lld %lld", &n, &m);
        if(m > n){
            a_inc = n + 1;
            d_inc = 1;
            a_init = 1;
            d_init = 1;
        }
        else if(m == n){
            a_inc = 2;
            d_inc = 2;
            a_init = 1;
            d_init = 1;
        }
        else{
            a_inc = 1;
            d_inc = 1;
            a_init = 1;
            d_init = m + 1;
        }
        ll a = a_init, d = d_init;
        for(ll i = 0; i < n; ++i){
            for(ll j = 0; j < m; ++j)
                printf("%lld ", a + d*j);
            a += a_inc;
            d += d_inc;
            printf("\n");
        }
    }
    return 0;
}
