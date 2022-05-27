#include <stdio.h>

int isEven(int num){
	return !(num%2);
}
int main(){
	int w;
	scanf("%d", &w);
	if(isEven(w - 2) && w >= 4)
		printf("YES");
	else
		printf("NO");
	return 0;
}
