#include <stdio.h>

long long int getNumSquaresWithOddLength(int totalLength){
	int i = 0;
 	long long int	count = 0;
	while(1){
		int sideLength = 2*i + 1;
		if(sideLength > totalLength)
			break;
		count += (totalLength + 1 - sideLength) * (totalLength + 1 - sideLength);
		++i;
	}
	return count;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", getNumSquaresWithOddLength(n));
	}
	return 0;
}
