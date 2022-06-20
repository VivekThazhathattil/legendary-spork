#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, m;
	scanf("%d %d", &n, &m);
	char *str = (char *)malloc(sizeof(char) * (n + 1));
	int *sum = (int *)calloc(10, sizeof(int));
	int *arr = (int *)calloc(n, sizeof(int));
	scanf("%s", str);
	for(int i = 0; i < n; ++i){
		++sum[str[i] - '0'];
		for(int j = 0; j < 10; ++j)
			arr[i] += sum[j] * abs(str[i] - '0' - j);
	}
	while(m--){
		int loc;
		scanf("%d", &loc);
		printf("%d\n", arr[--loc]);
	}
	free(str);
	free(arr);
	free(sum);
	return 0;
}
