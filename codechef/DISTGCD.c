#include <stdio.h>
#include <math.h>
#include <time.h>

int abs(int num){
	return num < 0 ? -num : num;
}

int getNumFactors(int num){
	if(num == 1)
		return 1;
	int i = 2, count = 2; // include 1 and num
	for(; i * i < num; ++i)
		if(num % i == 0)
			count += 2;
	if(i * i == num)
		++count;
	return count;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", getNumFactors(abs(a - b)));
	}
	return 0;
}
