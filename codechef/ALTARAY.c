#include <stdio.h>
#include <stdlib.h>

int isAlternating(int num1, int num2){
	return (num1 > 0 && num2 < 0) || (num1 < 0 && num2 > 0);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, temp, *arr;
		arr = (int *)calloc(n, sizeof(int));
		scanf("%d", &n);
		scanf("%d", &temp);
		++arr[0];
		for(int i = 1; i < n; ++i){
			scanf("%d", &temp);
			if(isAlternating(arr[i - 1], arr[i]))
		}
		free(arr);
	}
	return 0;
}
