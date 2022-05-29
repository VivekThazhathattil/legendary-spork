
#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long int sum = n*(n+1)/2;
		sum%2 == 0 ? printf("%d\n", n) : printf("%d\n", n - 1);
	}
	return 0;
}
