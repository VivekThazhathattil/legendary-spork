#include <stdio.h>

typedef long long int ll;

#define LIM 1000000007
#define N 1000002

int main(void){
	int t;
	scanf("%d", &t);
	ll pow_arr[N];
	pow_arr[0] = 1;
	for(int i = 1; i < N; ++i)
		pow_arr[i] = (pow_arr[i - 1] * 2) % LIM;
	while(t--){
		int n, x;
		scanf("%d %d", &n, &x);
		ll ans = (x * pow_arr[n - 1]) % LIM;
		printf("%lld\n", ans % LIM);
	}
	return 0;
}
