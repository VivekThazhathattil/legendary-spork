#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d %d", &n, &m);

		if(m == 0)
			printf("No %d\n", 1);
		else if(n % 2 == 0){
			if(n == 2 && m == 1)
				printf("Yes\n");
			else
				printf("No %d\n", 2);
		}
		else
			printf("Yes\n");
	}
	return 0;
}
