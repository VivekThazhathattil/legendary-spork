#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	(num%5 == 0 || num%6 == 0) ? printf("YES") : printf("NO");
	return 0;
}
