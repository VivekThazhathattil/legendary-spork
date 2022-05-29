#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int m, x, y, flag[100];
		scanf("%d %d %d", &m, &x, &y);
		for(int i = 0; i < 100; ++i)
			flag[i] = 0;
		int* arr = (int*) malloc(sizeof(int) * m);
		for(int i = 0; i < m; ++i){
			scanf("%d", &arr[i]);
			for(int j = 0; j <= x*y && arr[i] - 1 - j >= 0; ++j)
				flag[arr[i] - 1 - j] = 1;
			for(int j = 0; j <= x*y && arr[i] - 1 + j < 100; ++j)
				flag[arr[i] - 1 + j] = 1;
		}
		int numHouses = 0;
		for(int i = 0; i < 100; ++i)
			if(!flag[i]){
				++numHouses;
			}
		printf("%d\n", numHouses);
		free(arr);
	}
	return 0;
}
