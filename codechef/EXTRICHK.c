#include <stdio.h>

int main(void){
	short a, b, c;
	scanf("%hd %hd %hd", &a, &b, &c);
	if((a + b > c) && (b + c > a) && (c + a > b)){
		int numEqualSides = 0;
		if(a == b) ++numEqualSides;
		if(b == c) ++numEqualSides;
		if(c == a) ++numEqualSides;
		if(numEqualSides > 1)
			printf("1");
		else if(numEqualSides == 1)
			printf("2");
		else
			printf("3");
	}
	else
		printf("-1");
	return 0;
}
