#include <stdio.h>

int countBlackSquares(char* str){

}

void updateBounds(char* str, int* lmin, int* lmax, int* hmin, int* hmax){
}

int squaresToBePainted(char* str, int* lmin, int* lmax, int* hmin, int* hmax){

}

int main(void){
	int m, n, count = 0, lmin = 101, lmax = -1, hmin = 101, hmax = -1;
	char str[101];
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; ++i){
		scanf("%s", str);
		count += countBlackSquares(str);
		updateBounds(str, &lmin, &lmax, &hmin, &hmax);
	}
	printf("%d", squaresToBePainted(str, lmin, lmax, hmin, hmax));
	return 0;
}
