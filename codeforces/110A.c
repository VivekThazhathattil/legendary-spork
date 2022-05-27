#include <stdio.h>

int getLuckyDigitsCount(long long int num){
	int count = 0;
	while(num != 0){
		int digit = num % 10;
		if(digit == 4 || digit == 7)
			++count;
		num /= 10;
	}
	return count;
}

int isLuckyNumber(int num){
	if(num < 4)
		return 0;
	int flag = 1;
	while(num != 0){
		int digit = num % 10;
		if(digit != 4 && digit != 7){
			flag = 0;
			break;
		}
		num /= 10;
	}
	return flag;
}

int main(void){
	long long int n;
	scanf("%lld", &n);
	int count = getLuckyDigitsCount(n);
	if(isLuckyNumber(count))
		printf("YES");
	else
		printf("NO");
	return 0;
}	
