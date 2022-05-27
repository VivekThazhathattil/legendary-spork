#include <stdio.h>
#include <stdlib.h>

typedef long long int llint;

int compFunc(const void* a, const void* b){
	return *(llint*)a - *(llint*)b;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		llint n, *a;
		scanf("%lld", &n);
		a = (llint*) malloc(sizeof(llint) * n);
		for(llint i = 0; i < n; ++i)
			scanf("%lld", &a[i]);
		for(llint i = 0; i < n; ++i){
			llint temp;
			scanf("%lld", &temp);
			a[i] ^= temp;
		}
		qsort(a, n, sizeof(llint), compFunc);
		llint prev = a[0];
		llint count = 1, numGoodPairs = 0;
		for(llint i = 1; i < n; ++i){
			if(a[i] == prev)
				++count;
			else{
				numGoodPairs += count*(count-1)/2;
				prev = a[i];
				count = 1;
			}
		}
		numGoodPairs += count*(count-1)/2;
		printf("%lld\n", numGoodPairs);
		free(a);
	}
	return 0;
}
