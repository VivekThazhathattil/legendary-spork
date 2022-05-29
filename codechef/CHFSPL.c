#include <stdio.h>

typedef long long int llint;

llint min(llint num1, llint num2){
	return num1 < num2 ? num1 : num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		llint a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		printf("%lld\n", a + b + c - min(a, min(b, c)));
	}
	return 0;
}
