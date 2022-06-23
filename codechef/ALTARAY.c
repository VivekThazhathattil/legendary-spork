#include <stdio.h>
#include <stdlib.h>

int isAlternating(int num1, int num2){
	return (num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, altCount = 0;
		scanf("%d", &n);
		int *arr = (int *)calloc(n, sizeof(int));
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		for(int i = 1; i < n; ++i)
		free(arr);
	}
	return 0;
}
