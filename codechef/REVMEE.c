#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	scanf("%d", &n);
	int *arr = (int*) malloc(sizeof(int) * n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	for(int i = 0; i < n; ++i)
		printf("%d ", arr[n -1 -i]);
	free(arr);
	return 0;
}
