#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, d, dummy, atRisk = 0;
		scanf("%d %d", &n ,&d);
		for(int i = 0; i < n; ++i){
			scanf("%d", &dummy);
			if(dummy >= 80 || dummy <= 9)
				++atRisk;
		}
		int numDays = atRisk/d + (n - atRisk)/d;
		if(atRisk%d)
			++numDays;
		if((n - atRisk)%d)
			++numDays;
		printf("%d\n", numDays);
	}
	return 0;
}
