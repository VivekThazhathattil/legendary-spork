#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	int ii = 1;
	for(int i = 0; i < n; ++i){
		if(i&1)
			for(int j = 1; j <= 5; ++j)
				printf("%d ", (i + 1)*5 + 1 - j);
		else
			for(int j = 1; j <= 5; ++j)
				printf("%d ", i*5 + j);
		printf("\n");
	}
	return 0;
}
