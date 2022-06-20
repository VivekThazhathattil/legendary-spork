#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		printf("%d\n", n + (m >= n ? 0 : n - m));
	}
	return 0;
}
