#include <stdio.h>

int gcd_euclid(int num1, int num2){
	if(num1 == 0) return num2;
	if(num2 == 0) return num1;
	if(num1 == num2) return num1;
	if(num1 > num2) return gcd_euclid(num1 - num2, num2);
	return gcd_euclid(num1, num2 - num1);
}

int gcd_euclid_modulo(int num1, int num2){
	return num2 == 0 ? num1 : gcd(num2, num1 % num2);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d %d", &m, &n);
		printf("%d\n", gcd_euclid(m, n));
	}
	return 0;
}
