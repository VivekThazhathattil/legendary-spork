#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x;
		scanf("%d %d", &n, &x);
		printf("%d\n", n/(3*x));
	}
	return 0;
}
