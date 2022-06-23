#include <stdio.h>

typedef long long int ll;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int prev, curr, count = 1;
		ll answer = 0;

		scanf("%d", &prev);
		for(int i = 0; i < n - 1; ++i){
			scanf("%d", &curr);
			if(curr >= prev)
				++count;
			else{
				answer += (ll)count*((ll)count + 1)/2;
				count = 1;
			}
			prev = curr;
		}
		answer += (ll)count*((ll)count + 1)/2;
		printf("%lld\n", answer);
	}
	return 0;
}
