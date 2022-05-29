#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, max = -1, min = 100001;
		scanf("%d", &n);
		int *arr = (int*) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			if(arr[i] > max)
				max = arr[i];
			if(arr[i] < min)
				min = arr[i];
		}
		printf("%d\n", max - min);
		free(arr);
	}
	return 0;
}
