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
		double sum = 0;
		scanf("%d %d", &n, &k);
		int* arr = (int*) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			sum += arr[i]; 
		}
		qsort(arr, n, sizeof(int), compFun);
		for(int i = 0; i < k; ++i)
			sum = sum - arr[i] - arr[n - 1 - i];
		printf("%lf\n", sum/(n - 2*k));
		free(arr);
	}
	return 0;
}
