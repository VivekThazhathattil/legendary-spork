#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x;
		scanf("%d %d", &n, &x);
		printf("%d\n", x*(n/6) + x*(n%6 > 0 ? 1 : 0));
	}
	return 0;
}
