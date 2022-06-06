#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int l, r;
		scanf("%d %d", &l, &r);
		if(l%2 == 0)
			printf("%d %d %d %d\n", l, l + 1, l + 2, l + 3);
		else{
			if(r - l + 1 > 4)
				printf("%d %d %d %d\n", l + 1, l + 2, l + 3, l + 4);
			else
				printf("-1\n");
		}
	}
	return 0;
}
