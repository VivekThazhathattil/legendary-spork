#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int num, sum;
		scanf("%d %d", &num, &sum);
		if(sum <= num)
			printf("%d\n", sum);
		else
			printf("%d\n", 2*num - sum);
	}
	return 0;
}
