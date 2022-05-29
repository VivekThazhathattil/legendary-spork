#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int n, k;
		scanf("%lld %lld", &n, &k);
		if(!k)
			printf("%lld\n", n);
		else
			printf("%lld\n", n%k);
	}
	return 0;
}
