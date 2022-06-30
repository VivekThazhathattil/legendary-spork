#include <stdio.h>

typedef long long int ll;

int main(void){
    int t;
    ll factorial[21] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800, 39916800, 479001600, 6227020800, 87178291200, 1307674368000, 20922789888000, 355687428096000, 6402373705728000, 121645100408832000, 2432902008176640000};
    scanf("%d", &t);
    while(t--){
        char s[20];
        int alph_count[26];
        ll result = 1;
        for(int i = 0; i < 26; ++i)
            alph_count[i] = 0;
        scanf("%s", s);
        int i = 0;
        while(s[i] != '\0'){
            ++alph_count[s[i] - 'a'];
            ++i;
        }
        for(int i = 0; i < 26; ++i)
            if(alph_count[i] != 0)
                result *= factorial[alph_count[i]];
        printf("%lld\n", result);
    }
    return 0;
}
