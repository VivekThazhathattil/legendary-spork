#include <stdio.h>
#include <stdlib.h>

int main(void){
	int numCombinations;
	scanf("%d", &numCombinations);
	while(numCombinations--){
		int n;
		scanf("%d", &n);
		int *arr = (int *) malloc(sizeof(int) * n);

		scanf("%d", &arr[0]);
		for(int i = 1; i < n; ++i){
			scanf("%d", &arr[i]);
			arr[i] += arr[i - 1];
		}

		int flag = -1;
		for(int i = 1; i < n; ++i){
			if(arr[i - 1] == arr[n - 1] - arr[i]){
				flag = i;
				break;
			}
		}
		(n < 3) ? printf("-1\n") : printf("%d\n", flag);
		free(arr);
	}
	return 0;
}
