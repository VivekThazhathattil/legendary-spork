#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int compFun(const void* num1, const void* num2){
	return (*(ll*)num1 > *(ll*)num2) - (*(ll*)num1 < *(ll*)num2);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		ll *arr = (ll*) malloc(sizeof(ll) * n);
		for(int i = 0; i < n; ++i)
			scanf("%lld", &arr[i]);
		qsort(arr, n, sizeof(ll), compFun);
		int flag = 0;
		for(int i = 0; i < n - 1; ++i)
			if(abs(arr[i] - arr[i+1]) > 1){
				flag = 1;
				break;
			}
		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
