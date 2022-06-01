#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int  x, y;
		scanf("%lld %lld", &x, &y);
		if(x <= y)
			printf("%lld\n", y - x);
		else{
			if((x - y)&1)
				printf("%lld\n", 2 + (x - y)/2);
			else
				printf("%lld\n", (x - y)/2);
		}
	}
	return 0;
}
