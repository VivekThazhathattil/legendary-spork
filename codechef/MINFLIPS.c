#include <stdio.h>

int abs(int num){
	return num > 0 ? num : -num;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, sum = 0, temp;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &temp);
			sum += temp;
		}
		if(n&1)
			printf("-1\n");
		else{
			printf("%d\n", abs(sum/2));
		}
	}
	return 0;
}
