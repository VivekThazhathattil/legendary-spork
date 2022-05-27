#include <stdio.h>
#include <stdlib.h>

// Helper function for qsort
int compareFunc(const void *a,const void *b) {
	int *x = (int *) a;
	int *y = (int *) b;
	return *y - *x; // we want to sort in desc order
}

// get 2's power for the input num
int getPowerOfTwo(int num, int* onesCount){
	int count = 0;
	while(num >= 2){
		num /= 2;
		++count;
	}
	if(!*onesCount && num == 1)
		*onesCount = 1;
	return count;
}

// print array
void printArr(int *arr, int n){
	printf("\n");
	for(int i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, *pows, tempNum, hasOnes = 0, numOps = 0;
		scanf("%d", &n);
		pows = (int *)malloc(sizeof(int)*n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &tempNum);
			pows[i] = getPowerOfTwo(tempNum, &hasOnes);
		}
		qsort (pows, n, sizeof(*pows), compareFunc);
		printArr(pows, n);
		if(hasOnes)
			++numOps;
		printf("%d\n", numOps);
		free(pows);
	}
	return 0;
}
