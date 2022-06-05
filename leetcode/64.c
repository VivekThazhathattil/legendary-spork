#include <stdio.h>
#include <stdlib.h>

int min(int num1, int num2){
	return num1 < num2 ? num1 : num2;
}

int sum(int** grid, int m, int n, int i, int j){
	if(i - 1 < 0 || j - 1 < 0)
		return 0;
	return min(sum(grid, m, n, i - 1, j), sum(grid, m, n, i, j - 1)) + grid[i][j];
}

int minPathSum(int** grid, int gridSize, int* gridColSize){
	return sum(grid, gridSize, *gridColSize, gridSize, *gridColSize);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int m, n, **arr;
		scanf("%d %d", &m, &n);
		arr = (int**) malloc(sizeof(int*) * m);
		for(int i = 0; i < m; ++i){
			arr[i] = (int*) malloc(sizeof(int) * n);
			for(int j = 0; j < n; ++j)
				scanf("%d", &arr[i][j]);
		}
		printf("%d\n", minPathSum(arr, m, &n));
		for(int i = 0; i < m; ++i)
			free(arr[i]);
		free(arr);
	}
	return 0;
}
