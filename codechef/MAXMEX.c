#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int compFun(const void* num1, const void* num2){
	ll res = *(ll*)num1 - *(ll*)num2;
	return (res > 0 ? 1 : (res == 0 ? 0 : -1));
	//return (*(ll*)num1 > *(ll*)num2) - (*(ll*)num1 < *(ll*)num2);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);
		ll* arr = (ll*) malloc(sizeof(ll) * n);
		for(int i = 0; i <n; ++i)
			scanf("%lld", &arr[i]);
		qsort(arr, n, sizeof(ll), compFun);
		ll candidateMEX = 1, removeM = 0;
		for(int i = 0; i < n; ++i){
			if(arr[i] == m)
				--removeM;
			else if(candidateMEX == arr[i])
				++candidateMEX;
			else if(candidateMEX < arr[i])
				break;
		}
		if(candidateMEX == m)
			printf("%lld\n", n + removeM);
		else
			printf("-1\n");
		free(arr);
	}
	return 0;
}
