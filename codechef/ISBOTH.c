#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	if(n%55 == 0)
		printf("BOTH");
	else if(n%11 == 0 || n%5 == 0)
		printf("ONE");
	else 
		printf("NONE");
	return 0;
}
