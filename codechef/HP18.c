#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a, b, multA = 0, multB = 0, multAB = 0;
		scanf("%d %d %d", &n, &a, &b);
		long long int temp;
		for(int i = 0; i < n; ++i){
			scanf("%lld", &temp);
			if(temp%a == 0 && temp%b == 0)
				++multAB;
			else if(temp%a == 0)
				++multA;
			else if(temp%b == 0)
				++multB;
		}
		if(!multAB)
			multA > multB ? printf("BOB\n") : printf("ALICE\n");
		else
			multA >= multB ? printf("BOB\n") : printf("ALICE\n");
	}
	return 0;
}
