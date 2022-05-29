#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int w1, w2, x1, x2, m;
		scanf("%d %d %d %d %d", &w1, &w2, &x1, &x2, &m);
		if(m*x1 <= w2-w1 && m*x2 >= w2-w1)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
