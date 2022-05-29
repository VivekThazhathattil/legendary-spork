#include <stdio.h>

int minimum(int num1, int num2){
	return num1 < num2 ? num1 : num2;
}

int absolute(int num){
	return num >= 0 ? num : -num;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, a, b, c;
		scanf("%d %d %d %d", &n, &a, &b, &c);
		minimum(a, b) + minimum(absolute(b - a), c) >= n
			? printf("YES\n") 
			: printf("NO\n");
	}
	return 0;
}
