#include <stdio.h>

int min(int num1, int num2){
	return num1 < num2 ? num1 : num2;
}

int absol(int num){
	return num < 0 ? -num : num;
}

int countMin(int num1, int num2){
	int count = 0;
	while(num1 % 3 != 0 && num2 % 3 != 0){
		++count;
		int diff = absol(num1 - num2);
		num1 = min(num1, num2);
		num2 = diff;
	}
	return count;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", countMin(a, b));
	}
	return 0;
}
