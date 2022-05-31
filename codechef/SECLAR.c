#include <stdio.h>

typedef long long int llint;

llint max(llint num1, llint num2){
	return num1 > num2 ? num1 : num2;
}

llint min(llint num1, llint num2){
	return num1 < num2 ? num1 : num2;
}

int main(void){
	llint a, b, c, maxNum, minNum;
	scanf("%lld %lld %lld", &a, &b, &c);
	maxNum = max(a, max(b, c));
	minNum = min(a, min(b, c));
	printf("%lld", a + b + c - maxNum - minNum);
	return 0;
}
