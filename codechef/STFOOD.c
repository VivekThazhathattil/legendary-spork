#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, maxProfit = 0;
		scanf("%d", &n);
		while(n--){
			int s, p, v;
			scanf("%d %d %d", &s, &p, &v);
			if(maxProfit < (p/(s+1))*v)
				maxProfit = (p/(s+1))*v;
		}
		printf("%d\n", maxProfit);
	}
	return 0;
}
