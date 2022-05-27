#include <stdio.h>

int main(){
	int n, a, b, max = 0, curr = 0;
	scanf("%d", &n);
	while(n--){
		scanf("%d %d", &a, &b);
		curr = curr - a + b;
		if(curr > max)
			max = curr;
	}
	printf("%d", max);
}
