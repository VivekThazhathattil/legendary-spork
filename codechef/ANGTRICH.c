#include <stdio.h>

int main(void){
	short a, b, c;
	scanf("%hd %hd %hd", &a, &b, &c);
	printf(a + b + c == 180 && a > 0 && b > 0 && c > 0 ? "YES" : "NO");
	return 0;
}
