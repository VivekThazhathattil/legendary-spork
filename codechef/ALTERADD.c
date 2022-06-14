#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		if((b - a)%3 == 0 || (b - a)%3 == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
