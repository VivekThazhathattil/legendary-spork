#include <stdio.h>
#include <stdlib.h>

int compFun(const void* num1, const void* num2){
	return *(int*)num1 - *(int*)num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, *a, *b;
		scanf("%d", &n);
		a = (int *) malloc(sizeof(int) * n);
		b = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		for(int i = 0; i < n; ++i)
			scanf("%d", &b[i]);
		qsort(a, n, sizeof(int), compFun);
		qsort(b, n, sizeof(int), compFun);
		int max = -1;
		for(int i = 0, j = n-1; i < n && j >= 0; ++i, --j){
			int sample = a[i] + b[j];
			if(sample > max)	
				max = sample;
		}
		printf("%d\n", max);
		free(a);
		free(b);
	}
	return 0;
}
