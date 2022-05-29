#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int colors[7];
		for(int i = 0; i < 7; ++i)
			colors[i] = 0;
		int* arr = (int*) malloc(sizeof(int) * n);
		int count = 0, minFound = 0;
		for(int i = 0; i < n; ++i){
			scanf("%d",&arr[i]);
			if(!minFound){
				++count;
				if(1 <= arr[i] && arr[i] <= 7)
					colors[arr[i] - 1] = 1;
				int j = 0;
				while(j < 7){
					if(colors[j] == 0)
						break;
					++j;
				}
				if(j == 7)
					minFound = 1;
			}
		}
		printf("%d\n", count);
		free(arr);
	}
	return 0;
}
