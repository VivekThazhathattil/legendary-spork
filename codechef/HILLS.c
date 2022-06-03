#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, u, d, *arr, haveParachute = 1, numJumps = 0, ansFound = 0;
		scanf("%d %d %d", &n, &u, &d);
		arr = (int*) malloc(sizeof(int) * n);
		scanf("%d", &arr[0]);
		for(int i = 1; i < n; ++i){
			scanf("%d", &arr[i]);
			if(!ansFound){
				int diff = arr[i] - arr[i-1];
				if(-d <= diff && diff <= u)
					++numJumps;
				else{
					if(diff < -d && haveParachute){
						haveParachute = 0;
						++numJumps;
					}
					else
						ansFound = 1;
				}
			}
		}
		printf("%d\n", numJumps + 1);
		free(arr);
	}
	return 0;
}
