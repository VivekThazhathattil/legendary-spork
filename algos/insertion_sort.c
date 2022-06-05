#include <stdio.h>
#include <stdlib.h>

void insertionSort(int* arr, int n){
	for(int i = 1; i < n; ++i){
		int key = arr[i];
		int j = i - 1;
			while(j >= 0 && arr[j] > key){
				arr[j + 1] = arr[j];
				--j;
			}
			arr[j + 1] = key;
	}
	return;
}

void printArray(int* arr, int n){
	for(int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int *arr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		insertionSort(arr, n);
		printArray(arr, n);
		free(arr);
	}
	return 0;
}
