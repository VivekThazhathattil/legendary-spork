#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int l, r;
		scanf("%lld %lld", &l, &r);
		printf("%lld\n", 2*(r - l) + 1);
	}
	return 0;
}
