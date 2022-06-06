#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		ll *arr = (ll *) malloc(sizeof(ll) * n);
		for(int i = 0; i < n; ++i)
			scanf("%lld", &arr[i]);
		ll max = arr[0] + arr[n - 1];
		for(int i = 0; i < n - 1; ++i){
			if(arr[i] + arr[i + 1] > max)
				max = arr[i] + arr[i + 1];
		}
		printf("%lld\n", max);
		free(arr);
	}
	return 0;
}
