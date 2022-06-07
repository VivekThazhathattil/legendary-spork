#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, min = 1000000002;
		scanf("%d %d", &n, &k);
		int *arr = (int *)malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			if(arr[i] < min)
				min = arr[i];
		}
		int flag = 0;
		for(int i = 0; i < n; ++i){
			if(arr[i] > k - min){
				flag = 1;
				break;
			}
		}
		if(!flag || n == 1)
			printf("YES\n");
		else
			printf("NO\n");
		free(arr);
	}
}
