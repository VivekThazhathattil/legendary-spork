#include <stdio.h>

int main(void){
	int n, temp, tracker = 0, maxDepth = 0,
		maxDepthPos = 0, currSeqLen = 0, maxSeqLen = 0, maxSeqPos = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i){
		scanf("%d", &temp);
		if(temp == 1){
			++tracker;
			if(tracker > maxDepth){
				maxDepth = tracker;
				maxDepthPos = i + 1;
			}
		}
		else{
			--tracker;
		}
		++currSeqLen;
		if(tracker <= 0){
			if(currSeqLen > maxSeqLen){
				maxSeqLen = currSeqLen;
				maxSeqPos =  i + 2 - currSeqLen;
			}
			currSeqLen = 0;
		}
	}
	printf("%d %d %d %d", maxDepth, maxDepthPos, maxSeqLen, maxSeqPos);
	return 0;
}
