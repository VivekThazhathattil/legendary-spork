#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		printf("%d\n", (x - y) * z < 0 ? 0 : (x - y) * z);
	}
	return 0;
}
