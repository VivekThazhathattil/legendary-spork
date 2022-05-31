#include <stdio.h>

int main(void){
	int l, r;
	scanf("%d %d", &l, &r);
	if(!(l&1)) ++l;
	for(int i = l; i <= r; i+=2) 
		printf("%d ", i);
	return 0;
}
