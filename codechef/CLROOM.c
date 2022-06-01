#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int l, a, b;	
		scanf("%lld %lld %lld", &l, &a, &b);
		if(l*l == a*b)
			printf("Draw\n");
		else if(l*l > a*b)
			printf("Chef\n");
		else
			printf("Divyam\n");
	}
	return 0;
}
