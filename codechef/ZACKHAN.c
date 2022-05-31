#include <stdio.h>

int getGCD(int num1, int num2){
	if(num1 == 0)
		return num2;
	return getGCD(num2%num1, num1);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int l, b;
		scanf("%d %d", &l, &b);
		printf("%d", getGCD(l,b));
	}
	return 0;
}
