#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int myVotes[3], totVotes[3], maxDiff = -1, sumMyVotes = 0, sumTotVotes = 0;
		for(int i = 0; i < 3; ++i){
			scanf("%d", &myVotes[i]);
			sumMyVotes += myVotes[i];
		}
		for(int i = 0; i < 3; ++i){
			scanf("%d", &totVotes[i]);
			sumTotVotes += totVotes[i];
			if(totVotes[i] - myVotes[i] > maxDiff)
				maxDiff = totVotes[i] - myVotes[i];
		}
		if(sumTotVotes/2 < maxDiff + sumMyVotes)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
