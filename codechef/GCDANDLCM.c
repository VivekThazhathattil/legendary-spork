#include <stdio.h>
#include <math.h>

typedef long long int ll;

int is_square(ll num){
    ll root = (ll)sqrt(num);
    return root * root == num;
}

ll gcd(ll a, ll b){
    if(a == 0 || b == 0)
        return 0;
    if(a == b)
        return a;
    if(a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int are_coprimes(ll num1, ll num2){
    return gcd(num1, num2) == 1;
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, count = 0;
        scanf("%lld", &n);
        for(ll g = 1; g*g <= n/4; ++g){
            if(n % (g * g) == 0){
                ll num = n / (g * g);
                ll i = 1;
                while(i*i + 1 <= num/2){
                    if(num % (i*i + 1) == 0) {
                        ll numb = num / (i*i + 1);
                        if(is_square(numb - 1) && are_coprimes(i, (ll)sqrt(numb - 1))){
                            //printf("(%lld, %lld, %lld)----", g, i, (ll)sqrt(numb - 1));
                            ++count;
                        }
                    }
                    ++i;
                }
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
