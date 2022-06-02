#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, *arr;
		scanf("%d %d", &n, &k);
		arr = (int*) calloc(n, sizeof(int));
		for(int i = 0; i < n; ++i){
			int temp;
			scanf("%d", &temp);
			if(arr[temp - 1] != -1){
				if(temp -1 == i)
					arr[i] = -1;
				else
					++arr[temp - 1];
			}
		}
		int count = 0;
		for(int i = 0; i < n; ++i)
			if(arr[i] >= k)
				++count;
		printf("%d\n", count);
	}
	return 0;
}
