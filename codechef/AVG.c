#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, v, *arr, sum = 0;
		scanf("%d %d %d", &n, &k, &v);
		arr = (int*) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		int res = (v*(n + k) - sum)/k;
		if(res <= 0)
			printf("-1\n");
		else{
			if(v*(n + k) == sum + k*res)
				printf("%d\n", res);
			else
				printf("-1\n");
		}
		free(arr);
	}
	return 0;
}
