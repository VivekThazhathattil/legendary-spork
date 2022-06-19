#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

ll max(ll num1, ll num2){
	return (num1 > num2) ? num1 : num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		ll *arr = (ll *) malloc(sizeof(ll) * n), sum = 0;
		scanf("%lld", &arr[0]);
		for(int i = 1; i < n; ++i){
			scanf("%lld", &arr[i]);
			arr[i] += arr[i - 1];
		}
		ll minTime = 10000000001;
		for(int i = 0; i < n; ++i){
			if(max(arr[i], arr[n - 1] - arr[i]) < minTime)
				minTime = max(arr[i], arr[n - 1] - arr[i]);
		}
		printf("%lld\n", minTime);
		free(arr);
	}
	return 0;
}
