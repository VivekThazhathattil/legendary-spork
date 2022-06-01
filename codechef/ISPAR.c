#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int n, k;
		scanf("%lld %lld", &n, &k);
		if(k == 1)
			n%2 == 0 ? printf("EVEN\n") : printf("ODD\n");
		else if(k == 2)
			printf("ODD\n");
		else
			printf("EVEN\n");
	}
	return 0;
}
