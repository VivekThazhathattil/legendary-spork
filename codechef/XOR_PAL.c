#include <stdio.h>
#include <stdlib.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, count = 0;
		char *arr;
		scanf("%d", &n);
		arr = (char *)malloc(sizeof(char) * n + 1);
		scanf("%s", arr);
		for(int i = 0; i < n/2; ++i)
			if(arr[i] != arr[n - 1 - i])
				++count;
		printf("%d\n", (count + 1)/2);
		free(arr);
	}
	return 0;
}
