#include <stdio.h>

#define TO_SKY 1
#define FROM_GROUND 2

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int numBarriers, edwardHeight, duckUnits, jumpUnits, numLifeForce;
		scanf("%d %d %d %d %d", &numBarriers, &edwardHeight, &duckUnits, &jumpUnits, &numLifeForce);
		int barrierType, barrierHeight, numBarriersCrossed = 0, i = 0, stopCount = 0;
		for(; i < numBarriers; ++i){
			scanf("%d %d", &barrierType, &barrierHeight);

			if(barrierType == FROM_GROUND){
				if(jumpUnits < barrierHeight)
						--numLifeForce;
			}
			else{
				if(edwardHeight - duckUnits > barrierHeight)
						--numLifeForce;
			}
			if(!stopCount && numLifeForce == 0){
				stopCount = 1;
				numBarriersCrossed = i;
			}
		}
		printf("%d\n", numLifeForce > 0 ?  numBarriers : numBarriersCrossed);
	}
	return 0;
}
