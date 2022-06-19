#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int compFun(const void *num1, const void *num2){
	return (*(ll*)num1 > *(ll*)num2) - (*(ll*)num1 < *(ll*)num2);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, flag = 0;
		ll w, wr;
		scanf("%d %lld %lld", &n, &w, &wr);
		w -= wr;
		if(w <= 0)
			flag = 1;
		ll *arr = (ll *) malloc(sizeof(ll) * n);
		for(int i = 0; i < n; ++i)
			scanf("%lld", &arr[i]);
		qsort(arr, n, sizeof(ll), compFun);
		int i = 1, count = 1;
		ll ref = arr[0], currWt = 0;
		while(i < n){
			if(currWt >= w){
				flag = 1;
				break;
			}
			if(arr[i] == ref)	++count;
			else{
				if(count >= 2)
				currWt += (count - (count % 2)) * arr[i - 1];
				ref = arr[i];
				count = 1;
			}
			++i;
		}
		if(count >= 2)
				currWt += (count - (count % 2)) * arr[i - 1];
		if(currWt >= w)
			flag = 1;
		printf(flag == 1 ? "YES\n" : "NO\n");
		free(arr);
	}
	return 0;
}
