#include <stdio.h>
#include <math.h>

typedef long long int ll;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k;
		scanf("%d %d", &n, &k);
		ll ans = 0;
		for(int a = 0; a < pow(2, n); ++a)
			for(int b = a + 1; b < pow(2, n); ++b)
				if(b + 1 <= ((a^b)^k) && ((a^b)^k) < pow(2, n)){
					printf("(a,b,c) = (%d, %d, %d)\n", a, b, ((a^b)^k));
					++ans;
				}
		printf("%lld\n", 6*ans);
	}
	return 0;
}
