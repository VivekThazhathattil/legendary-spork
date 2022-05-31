#include <stdio.h>

int main(void){
	while(1){
		int n;
		scanf("%d", &n);
		if(n == 42)
			break;
		else
			printf("%d\n", n);
	}
	return 0;
}
