#include <stdio.h>
#include <stdlib.h>

int compFun(const void *num1, const void* num2){
	return *(int*)num1 - *(int*)num2;
}

int main(void){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n, max = 0, curr = 0;
		scanf("%d", &n);
		int* arr = (int *) malloc(sizeof(int) * n);
		int* dep = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i) scanf("%d", &arr[i]);
		for(int i = 0; i < n; ++i) scanf("%d", &dep[i]);
		qsort(arr, n, sizeof(int), compFun);
		qsort(dep, n, sizeof(int), compFun);
		int i = 0, j = 0;
		while(i < n && j < n){
			if(arr[i] < dep[j]){
				++i;
				++curr;
			}
			else if(arr[i] == dep[j]){
				if(curr > max)
					max = curr;
				++i;
				++j;
			}
			else{
				if(curr > max)
					max = curr;
				--curr;
				++j;
			}
		}
		if(curr > max)
			max = curr;
		printf("%d\n", max);
		free(arr);
		free(dep);
	}
	return 0;
}
