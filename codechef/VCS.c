#include <stdio.h>
#include <stdlib.h>

int compFun(const void* num1, const void* num2){
	return *(int*)num1 - *(int*)num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, k, *a, *b, numTrackIgnore = 0;
		scanf("%d %d %d", &n, &m, &k);
		a = (int*) malloc(sizeof(int) * m);
		b = (int*) malloc(sizeof(int) * k);
		for(int i = 0; i < m; ++i)
			scanf("%d", &a[i]);
		for(int i = 0; i < k; ++i)
			scanf("%d", &b[i]);
		int i = 0, j = 0;
		while(i < m && j < k){
			if(a[i] == b[j]){
				++numTrackIgnore;
				++i;
				++j;
			}
			else if(a[i] > b[j]) ++j;
			else ++i;
		}
		printf("%d %d\n", numTrackIgnore, n - (m + k) + numTrackIgnore);
		free(a);
		free(b);
	}
	return 0;
}
