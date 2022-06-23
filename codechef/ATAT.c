#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int *mex = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &mex[i]);
		for(int i = 0; i < n; ++i){
			ll least = 0, most = 0;
			for(int j = 0 ; j < n; ++j){
				if(i < mex[j]){
					++least;
					most += (ll)n - (ll)mex[j] + 1;
				}
				else if(i > mex[j]){
					most += (ll)n - (ll)mex[j];
				}
			}
			printf("%lld %lld\n", least, most);
		}
		free(mex);
	}
	return 0;
}
