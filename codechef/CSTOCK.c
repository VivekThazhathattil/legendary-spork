#include <stdio.h>

typedef long long int llint;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		llint s, a, b;
		double c;
		scanf("%lld %lld %lld %f", &s, &a, &b, &c);
		c = s*(1 + c/100);
		printf("c = %f\n", c);
		if(c <= b && c >= a)	
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
