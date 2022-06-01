#include <stdio.h>

typedef long long int ll;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		ll n, arr[7];
		scanf("%lld", &n);
		for(int i = 0; i < 7; ++i){
			scanf("%lld", &arr[i]);
			if(i > 0)
				arr[i] += arr[i-1];
		}
		for(int i = 0; i < 7; ++i)
			if(arr[i] >= (n % arr[6])){
				printf("%d\n", i + 1);
				break;
			}
	}
	return 0;
}
