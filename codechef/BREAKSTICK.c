#include <stdio.h>

int isOdd(int num){
	return (num&1);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x;
		scanf("%d %d", &n, &x);
		if(isOdd(x))
			printf("YES\n");
		else{
			if(isOdd(n - x))
				printf("NO\n");
			else
				printf("YES\n");
		}
	}
	return 0;
}
