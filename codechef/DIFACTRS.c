#include <stdio.h>
#include <stdlib.h>

typedef long long int llint;

void solve(llint num){
	int count = 0;
	for(llint i = 1; i <= num; ++i)
		if(num%i == 0)
			++count;
	printf("%lld\n", count);
	for(llint i = 1; i <= num; ++i)
		if(num%i == 0)
			printf("%lld ", i);
	printf("\n");
}

int main(void){
	llint n;
	scanf("%lld", &n);
	solve(n);
	return 0;
}
