#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, x;
		scanf("%d %d %d", &a, &b, &x);
		printf("%d\n", (b - a)/x);
	}
	return 0;
}
