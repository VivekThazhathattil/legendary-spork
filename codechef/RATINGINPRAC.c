#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, *arr;
		scanf("%d", &n);
		arr = (int*) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		int flag = 1, prev = arr[0];
		for(int i = 1; i < n; ++i){
			if(prev > arr[i]){
				flag = 0;
				break;
			}
			prev = arr[i];
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
		free(arr);
	}
	return 0;
}
