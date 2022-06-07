#include <stdio.h>
#include <stdlib.h>

#define LIM 1000000002

long long int absol(long long int num){
	return num < 0 ? -num : num;
}

long long int max(long long int num1, long long int num2){
	return num1 > num2 ? num1 : num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long int temp, sum = 0, evenIdxMin = LIM, oddIdxMax = -LIM;
		for(int i = 0; i < n; ++i){
			scanf("%lld", &temp);
			temp = absol(temp);
			if(i%2 == 0){
				sum += temp;
				if(evenIdxMin > temp)
					evenIdxMin = temp;
			}
			else{
				sum -= temp;
				if(oddIdxMax < temp)
					oddIdxMax = temp;
			}
		}
		printf("%lld\n", max(sum, sum + 2*(oddIdxMax - evenIdxMin)));
	}
	return 0;
}
