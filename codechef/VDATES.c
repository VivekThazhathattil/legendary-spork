#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int d, l, r;
		scanf("%lld %lld %lld", &d, &l, &r);
		if(d < l)
			printf("Too Early\n");
		else if(d >= l && d <= r)
			printf("Take second dose now\n");
		else
			printf("Too Late\n");
	}
	return 0;
}
