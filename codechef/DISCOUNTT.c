#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x, y, *arr, discountSum = 0, actualSum = 0;
		scanf("%d %d %d", &n, &x, &y);
		arr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			actualSum += arr[i];
			if(arr[i] > y)
				discountSum += arr[i] - y;
		}
		if(discountSum  + x < actualSum)
			printf("COUPON\n");
		else
			printf("NO COUPON\n");
		free(arr);
	}
	return 0;
}
