#include <stdio.h>
#include <stdlib.h>

int compFun(const void* num1, const void *num2){
	long long int a = *(long long int*)num1;
	long long int b = *(long long int*)num2;
	return (a > b) - (a < b);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		long long int *arr;
		scanf("%d", &n);
		arr = (long long int *) malloc(sizeof(long long int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%lld", &arr[i]);
		qsort(arr, n, sizeof(long long int), compFun);
		int totalCount = 0, partialCount = 0;
		for(int i = 1; i < n; ++i){
			while(arr[i-1] == arr[i] && i < n){
				++partialCount;
				++i;
			}
			totalCount += partialCount;
			partialCount = 0;
		}
		printf("%d\n", totalCount);
		free(arr);
	}
	return 0;
}

