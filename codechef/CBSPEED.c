#include <stdio.h>

int main(void){
	int x, y;
	scanf("%d %d", &x, &y);
	if(y > x)
		printf("YES");
	else
		printf("NO");
	return 0;
}
