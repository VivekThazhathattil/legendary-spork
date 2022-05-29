#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int numPeople, chefPosition, timeChild, timeAdult, totalTime = 0, chefPositionReached = 0;
		scanf("%d %d %d %d", &numPeople, &chefPosition, &timeChild, &timeAdult);
		for(int currentPosition = 1; currentPosition <= numPeople; ++currentPosition){
			int personType;
			scanf("%d", &personType);
			if(!chefPositionReached){
				if(personType == 0) // child
					totalTime += timeChild;
				else if(personType == 1)
					totalTime += timeAdult;
				if(currentPosition == chefPosition)
					chefPositionReached = 1;
			}
		}
		printf("%d\n", totalTime);
	}
	return 0;
}
