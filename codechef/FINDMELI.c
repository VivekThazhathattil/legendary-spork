#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, k;
	scanf("%d %d", &n, &k);
	int* arr = (int*) malloc(sizeof(int) * n);
	int flag = -1;
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
		if(arr[i] == k)
			flag = 1;
	}
	printf("%d", flag);
	free(arr);
	return 0;
}
