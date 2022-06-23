#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		char equalPieces, pieces, unequalPieces;
		scanf("%d", &n);
		equalPieces =  (360 % n == 0) ? 'y' : 'n';
		pieces = (n <= 360) ? 'y' : 'n';
		unequalPieces = (n*(n + 1)/2 <= 360) ? 'y' : 'n';
		printf("%c %c %c\n", equalPieces, pieces, unequalPieces);
	}
	return 0;
}
