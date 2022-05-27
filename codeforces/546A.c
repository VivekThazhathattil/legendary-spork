#include <stdio.h>

int main(void){
	int k, w;
	long long int n;
	scanf("%d %lld %d", &k, &n, &w);
	printf("%lld", k*w*(w+1)/2 <= n ? 0 : k*w*(w+1)/2 - n);
	return 0;
}
