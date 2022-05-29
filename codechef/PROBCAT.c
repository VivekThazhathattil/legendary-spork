#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int x;
		scanf("%d", &x);
		if(1 <= x && x < 100)
			printf("Easy\n");
		else if(100 <= x && x < 200)
			printf("Medium\n");
		else if(200 <= x && x <= 300)
			printf("Hard\n");
	}
	return 0;
}
