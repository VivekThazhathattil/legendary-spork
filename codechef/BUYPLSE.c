#include <stdio.h>

int main(void){
	int a, b, x, y;
	scanf("%d %d %d %d", &a, &b, &x, &y);
	printf("%lld", a*x + b*y);
	return 0;
}
