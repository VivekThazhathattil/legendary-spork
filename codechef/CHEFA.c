#include <stdio.h>
#include <stdlib.h>

int compFun(const void* num1, const void* num2){
	return *(int*)num2 - *(int*)num1;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int* arr = (int *)malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i) scanf("%d", &arr[i]);
		qsort(arr, n, sizeof(int), compFun);
		long long int sum = 0;
		for(int i = 0; i < n; i+=2)
			sum += arr[i];
		printf("%lld\n", sum);
		free(arr);
	}
	return 0;
}
