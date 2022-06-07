#include <stdio.h>

#define LIM 1000000007
#define DIV 30

typedef long long int ll;

ll e(ll base, ll raise){
	ll num = 1;
	while(raise--){
		num *= base;
	}
	return num;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n;
		scanf("%lld", &n);
		ll quot = (n - 1) / DIV;
		ll rem = (n - 1) % DIV;
		ll ans = 1;
		ll temp = e(2, DIV);
		for(ll i = 0; i < quot; ++i)
			ans = (ans*temp)%LIM;
		ans = (ans*e(2, rem)%LIM);
		printf("%lld\n", ans%LIM);
	}
	return 0;
}
