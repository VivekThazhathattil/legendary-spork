#include <stdio.h>

int main(void){
	int x, steps = 0;
	scanf("%d", &x);
	for(int i = 5; i > 0; --i){
		steps += x/i;
		x = x%i;
	}
	printf("%d", steps);
	return 0;
}
