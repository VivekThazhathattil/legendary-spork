#include <stdio.h>

int max(int a, int b){
	return a > b ? a : b;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, farLeft = 1001, farRight = -1, farTop = 1001, farBottom = -1, count = 0;
		scanf("%d %d", &n, &m);
		char str[1001][1001];
		for(int i = 0; i < n; ++i)
			scanf("%s", str[i]);

		for(int i = 0; i < n; ++i)
			for(int j = 0; j < m; ++j){
				if(str[i][j] == '*'){
					if(!count) count = 1;
					if(i < farLeft) farLeft = i;
					if(i > farRight) farRight = i;
					if(j < farTop) farTop = j;
					if(j > farBottom) farBottom = j;
				}
			}
		int temp = max(farRight - farLeft, farBottom - farTop);
		if(!count)
			printf("0\n");
		else{
			if(temp&1)
				printf("%d\n", temp/2 + 2);
			else
				printf("%d\n", temp/2 + 1);
		}
	}
	return 0;
}
