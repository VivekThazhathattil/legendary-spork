#include <stdio.h>

int main(void){
	long long int n;
	int k;
	scanf("%lld %d", &n, &k);
	for(int i = 0; i < k; ++i){
		int lastDigit = n%10;
		if(lastDigit)
			--n;
		else
			n /= 10;
	}
	printf("%lld", n);
	return 0;
}
