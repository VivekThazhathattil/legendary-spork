#include <stdio.h>
#include <stdlib.h>

int getSumDigits(int num){
	int sum = 0;
	while(num != 0){
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int getUnitDigit(int num){
	return num % 10;
}

int absoluteVal(int num){
	return num > 0 ? num : -num;
}

int isDivisibleBySeven(int sumDigits, int lastNum){
	int unitDigit = getUnitDigit(lastNum);
	int sumAllDigitsButOne = sumDigits - unitDigit;
	return absoluteVal(sumAllDigitsButOne - 2*unitDigit) % 7 == 0 ? 1 : 0;
}


int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, *arr, sumOfDigits = 0;
		long long int numSubsequenes = 0;
		scanf("%d", &n);
		arr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			sumOfDigits += getSumDigits(arr[i]);
		}
		for(int i = 0; i < n; ++i){
			if(isDivisibleBySeven(sumOfDigits, arr[i]))
				++numSubsequenes;
		}
		printf("%lld", numSubsequenes);
		free(arr);
	}
	return 0;
}
