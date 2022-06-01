#include <stdio.h>

typedef long long int ll;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n, k;	
		scanf("%lld %lld", &n, &k);
		if(n%2 == 0)
			printf("Yes\n");
		else{
			if(k == 0)
				printf("No\n");
			else
				printf("Yes\n");
		}
	}
	return 0;
}
