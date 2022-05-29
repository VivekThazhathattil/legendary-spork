#include <stdio.h>

int absolute(int a){
	return a > 0 ? a : -a;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int row1, col1, row2, col2, fuel;
		scanf("%d %d %d %d %d", &row1, &col1, &row2, &col2, &fuel);
		int numSteps = absolute(row1 - row2) + absolute(col1 - col2);
		if(fuel < numSteps)
			printf("NO\n");
		else if((fuel - numSteps)%2 == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
