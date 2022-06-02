#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, prevMisheard = 0, numFaultyPlayers = 0;
		long long int curr, prev;
		scanf("%d", &n);
		scanf("%lld", &prev);
		for(int i = 0; i < n - 1; ++i){
			scanf("%lld", &curr);
			if(prev != curr){
				prev = curr;
				if(prevMisheard)
					++numFaultyPlayers;
				else{
					numFaultyPlayers += 2;
					prevMisheard = 1;
				}
			}
			else
				if(prevMisheard) prevMisheard = 0;
		}
		printf("%d\n", numFaultyPlayers);
	}
	return 0;
}
