#include <stdio.h>
#include <stdlib.h>

typedef long long int llint;

int compFun(const void* a, const void* b){
	if(*(llint*)a - *(llint*)b > 0)
		return 1;
	else if(*(llint*)a == *(llint*)b)
		return 0;
	else
		return -1;
}

int main(void){
	llint n, revenue = -1;
	scanf("%lld", &n);
	llint* arr = (llint*) malloc(sizeof(llint) * n);
	for(llint i = 0; i < n; ++i)
		scanf("%lld", &arr[i]);
	qsort(arr, n, sizeof(llint), compFun);
	llint currNum = -1;
	for(llint i = 0; i < n; ++i){
		if(currNum != arr[i]){
			currNum = arr[i];
			if(revenue < currNum*(n-i))
				revenue = currNum*(n-i);
		}
	}
	printf("%lld", revenue);
	free(arr);
	return 0;
}
