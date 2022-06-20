#include <stdio.h>
#include <stdlib.h>

int getFloor(int roomNo){
	int floor = 1;
	for(int i = 1; i <= 10; ++i)
		if(10 * (i - 1) + 1 <= roomNo && roomNo <= 10 * i){
			floor = i;
			break;
		}
	return floor;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y;
		scanf("%d %d", &x, &y);
		int floorChef = getFloor(x);
		int floorChefina = getFloor(y);
		printf("%d\n", abs(floorChef - floorChefina));
	}
	return 0;
}
