#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, k, *arr;
	long long int sum = 0;
	scanf("%d %d", &n, &k);
	arr = (int *) malloc(sizeof(int) * n);
	for(int i = 0, j = 0; i < n; ++i, ++j){
		scanf("%d", &arr[i]);
		if(i - j)
	}
	return 0;
}
