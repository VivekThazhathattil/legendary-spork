#include <stdio.h>
int main(void){
	int n, count = 0;
	scanf("%d", &n);
	while(n--){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if(a+b+c >= 2)
			++count;
	}
	printf("%d", count);
	return 0;
}
