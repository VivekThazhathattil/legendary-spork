#include <stdio.h>
#include <stdlib.h>

int compFun(const void* num1, const void* num2){
	return *(int*)num1 - *(int*)num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, *arr;
		scanf("%d", &n);
		arr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		qsort(arr, n, sizeof(int), compFun);
		int numPeopleAttending = 0;
		for(int i = 0;i < n; ++i)
			if(numPeopleAttending >= arr[i])
				++numPeopleAttending;
		printf("%d\n", numPeopleAttending);
		free(arr);
	}
	return 0;
}
