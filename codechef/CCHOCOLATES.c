#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		printf("%d\n",(x*5 + y*10)/z);
	}
	return 0;
}
