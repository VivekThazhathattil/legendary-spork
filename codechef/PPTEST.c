#include <stdio.h>
#include <stdlib.h>

typedef struct que{
	int points, mins;
} Que;

int max(int num1, int num2){
	return num1 > num2 ? num1 : num2;
}

/*
int maxPossiblePoints(Que* q, int n, int w, int idx){
	if(w <= 0 || idx >= n)
		return 0;
	if(w - q[idx].mins < 0)
		return maxPossiblePoints(q, n, w, idx + 1);
	return max(q[idx].points + \
			maxPossiblePoints(q, n, w - q[idx].mins, idx + 1),
			maxPossiblePoints(q, n, w, idx + 1));
}
*/

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, w, c, p, dp[101][101];
		scanf("%d %d", &n, &w);
		Que *q = (Que *) malloc(sizeof(Que) * n);
		for(int i = 0; i < n; ++i){
			scanf("%d %d %d", &c, &p, &q[i].mins);
			q[i].points = c*p;
		}
		for(int ni = 0; ni <= n; ++ni)
			for(int wi = 0; wi <= w; ++wi){
				if(ni == 0 || wi == 0)
					dp[ni][wi] = 0;
				else{
					if(wi >= q[ni - 1].mins)
						dp[ni][wi] = max(dp[ni - 1][wi], dp[ni - 1][wi - q[ni - 1].mins] + q[ni - 1].points);
					else
						dp[ni][wi] = dp[ni - 1][wi];
				}
			}
		printf("%d\n", dp[n][w]);
		free(q);
	}
	return 0;
}
