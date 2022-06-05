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

void bubbleSort(int* arr, int n){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n - i - 1; ++j){
			if(arr[j] > arr[j + 1])	
				swap(&arr[j], &arr[j + 1]);
		}
	}
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
		bubbleSort(arr, n);
		printArray(arr, n);
		free(arr);
	}
	return 0;
}
