#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(n == 3)
			printf("010\n");
		else{
			printf("10");
			for(int i = 0; i < n - 4; ++i) printf("0");
			printf("01\n");
		}
	}
	return 0;
}
