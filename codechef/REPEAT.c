#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, s;
		scanf("%d %d %d", &n, &k, &s);
		printf("%d\n", (s - n*n)/(k - 1));
	}
	return 0;
}
