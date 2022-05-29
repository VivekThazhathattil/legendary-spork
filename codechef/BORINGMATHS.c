#include <stdio.h>
#include <stdlib.h>

typedef long long int llint;

int main(void){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n, atleastPrimeFound = 0;
		llint minNum = 1000001, primes[1000000];
		scanf("%d", &n);
		llint* arr = (llint*)	 malloc(sizeof(llint) * n);
		for(int i = 0; i < n; ++i){
			scanf("%lld", &arr[i]);
			if(minNum > arr[i])
				minNum = arr[i];
		}

		// add primes to primesArray
		llint c = 2, ii = 0;

		while(minNum > 1){
			int flag = 0;
			while(minNum%c == 0){
				if(!flag)
					flag = 1;
				minNum /= c;
			}
			if(flag)
				primes[ii++] = c;
			++c;
		}

		for(llint i = 0; i < ii; ++i){
			int flag = 1;
			for(llint j = 0; j < n; ++j){
				if(arr[j] % primes[i] != 0){
					flag = 0;
					break;
				}
			}
			if(flag){
				if(!atleastPrimeFound)
					atleastPrimeFound = 1;
				printf("%d ", primes[i]);
			}
		}
		if(!atleastPrimeFound)
			printf("-1");
		printf("\n");
		free(arr);
	}
	return 0;
}
