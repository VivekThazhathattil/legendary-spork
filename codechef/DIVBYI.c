#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int oddCounter = 1, evenCounter = n/2;
		for(int i = 0; i < n; ++i){
			if(i%2 == 0){
				printf("%d ", (n/2 + oddCounter));
				++oddCounter;
			}
			else{
				printf("%d ", (evenCounter));
				--evenCounter;
			}
		}
		printf("\n");
	}
	return 0;
}
