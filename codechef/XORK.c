#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

ll xor_array(ll l, ll r, ll* x){
    if(l == 0)
        return (x[r]);
    else
        return (x[r]^x[l - 1]);
}

void print_array(ll *arr, ll n){
	for(ll i = 0 ; i < n; ++i)
		printf("%lld ", arr[i]);
	printf("\n");
	return;
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        ll n, k;
        scanf("%lld %lld", &n, &k);
        ll *arr = (ll *) malloc(sizeof(ll) * n);
        ll *prefix_xor = (ll *) malloc(sizeof(ll) * n);
        ll *suffix_xor = (ll *) malloc(sizeof(ll) * n);
        ll ans = 100001, possible_subarray_len = n;
        for(ll i = 0; i < n; ++i){
            scanf("%lld", &arr[i]);
            if(arr[i] >= k && ans == 100001)
                ans = 1;
            prefix_xor[i] = (i == 0) ?  arr[i] : (arr[i]^prefix_xor[i - 1]);
            if(prefix_xor[i] >= k && i + 1 < possible_subarray_len)
                possible_subarray_len = i + 1;
        }
        for(ll i = n - 1; i >= 0; --i){
            if(i == n - 1)
                suffix_xor[i] = arr[i];
            else
                suffix_xor[i] = suffix_xor[i + 1]^arr[i];
            if(suffix_xor[i] >= k && n - i < possible_subarray_len)
                possible_subarray_len = n - i;
        }
        //print_array(prefix_xor, n);
        if(ans != 1){
            for(ll l = 0; l < n; ++l){
                for(ll r = l + 1; r <= l + possible_subarray_len && r < n; ++r)
                    if(xor_array(l, r, prefix_xor) >= k && r - l + 1 < ans){
                        //printf("r:%lld, l:%lld %lld\n", r, l);
                        ans = r - l + 1;
                        if(ans == 2)
                            break;
                    }
                if(ans == 2)
                    break;
            }
        }
        if(ans == 100001)
            printf("-1\n");
        else
            printf("%lld\n", ans);
        free(arr);
        free(prefix_xor);
        free(suffix_xor);
    }
    return 0;
}
