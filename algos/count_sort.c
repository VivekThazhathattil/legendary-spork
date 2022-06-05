#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int n){
	for(int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

// admissible values restricted from 0 to 100
#define ADM_RANGE 101

int* countSort(int* arr, int n, int k){
	int *count = (int *) calloc(k + 1, sizeof(int));
	int *res = (int *) malloc(sizeof(int) * n);
	for(int i = 0; i < n; ++i) count[arr[i]]++;
	for(int i = 1; i < k; ++k) count[i] += count[i - 1];
	for(int i = n - 1; i >= 0; --i){
		printf("yo!\n");
		if(count[arr[i]] > 0){
			res[count[arr[i]] - 1] = arr[i];
			--count[arr[i]];
		}
	}
	free(count);
	return res;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k = ADM_RANGE; 
		scanf("%d", &n);
		int* arr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		int *ans = countSort(arr, n, k);
		printArray(ans, n);
		free(ans);
		free(arr);
	}
	return 0;
}
