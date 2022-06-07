#include <stdio.h>
#include <stdlib.h>

int compFun(const void* num1, const void* num2){
	return *(int*)num1 - *(int*)num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k;
		scanf("%d %d", &n, &k);
		if(n == 1)
			printf("NO\n");
		else{
			int *motu = (int *) malloc(sizeof(int) * (n - n/2));
			int *tomu = (int *) malloc(sizeof(int) * (n/2));
			int sumMotu = 0, sumTomu = 0, idxMotu = 0, idxTomu = 0;
			for(int i = 0; i < n; ++i){
				if(i%2 == 0){
					scanf("%d", &motu[idxMotu]);
					sumMotu += motu[idxMotu];
					++idxMotu;
				}
				else{
					scanf("%d", &tomu[idxTomu]);
					sumTomu += tomu[idxTomu];
					++idxTomu;
				}
			}
			qsort(motu, idxMotu, sizeof(int), compFun);
			qsort(tomu, idxTomu, sizeof(int), compFun);
			for(int i = 0; i < k; ++i){
				if(sumTomu > sumMotu || i >= idxTomu)
					break;
				sumTomu = sumTomu + motu[idxMotu - 1 - i] - tomu[i];
				sumMotu = sumMotu - motu[idxMotu - 1 - i] + tomu[i];
			}
			if(sumTomu > sumMotu)
				printf("YES\n");
			else
				printf("NO\n");
			free(motu);
			free(tomu);
		}
	}
	return 0;
}
