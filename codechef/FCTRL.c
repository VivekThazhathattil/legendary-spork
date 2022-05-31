#include <stdio.h>

int z(int num){
	int numZeros = 0;
	while(num/5){
		numZeros += num/5;
		num /= 5;
	}
	return numZeros;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", z(n));
	}
	return 0;
}
