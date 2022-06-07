#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int interval, days, p, q;
		scanf("%lld %lld %lld %lld", &days, &interval, &p, &q);
		long long int n = days/interval - 1;
		long long int res = p*days + 
			q*((interval*n*(n+1))/2 +
				 	(days%interval)*(n+1));
		printf("%lld\n", res);
	}
	return 0;
}
