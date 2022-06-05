#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int n){
	for(int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

void swap(int* num1, int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	return;
}

void selectionSort(int* arr, int n){
	for(int i = 0; i < n; ++i){
		int minIdx = i;
		for(int j = i + 1; j < n; ++j)
			if(arr[minIdx] > arr[j])
				minIdx = j;
		if(i != minIdx)
			swap(&arr[minIdx], &arr[i]);
	}
	return;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n; 
		int* arr = (int *) malloc(sizeof(int) * n);
		scanf("%d", &n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		selectionSort(arr, n);
		printArray(arr, n);
		free(arr);
	}
	return 0;
}
