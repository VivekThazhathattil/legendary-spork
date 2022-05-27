#include <stdio.h>

int main(void){
	int n, k, arr[50], count = 0;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	for(int i = 0; i < n; ++i)
		if(arr[i] >= arr[k-1] && arr[i] > 0)
			++count;
	printf("%d", count);
	return 0;
}
