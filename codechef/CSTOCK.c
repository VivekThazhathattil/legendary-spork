#include <stdio.h>

typedef long long int llint;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		double s, a, b, c;
		scanf("%lf %lf %lf %lf", &s, &a, &b, &c);
		c = s*(1 + c/100);
		if(a <= c && c <= b)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
