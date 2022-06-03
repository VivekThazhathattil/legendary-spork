#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, k, score = 0, numCorrect = 0;
		scanf("%d %d %d", &n, &m, &k);
		int *arr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		for(int i = 0; i < n; ++i){
			if(arr[i] == 0){
				if(i + 1 <= m){
					score = 0;
					break;
				}
				else{
					score = k;
					break;
				}
			}
			else
				++numCorrect;
		}
		if(numCorrect == n)
			printf("%d\n", 100);
		else
			printf("%d\n", score);
		free(arr);
	}
	return 0;
}
