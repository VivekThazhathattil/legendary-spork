#include <stdio.h>

int max(int num1, int num2){
	return num1 > num2 ? num1 : num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int pa, pb, qa, qb;
		scanf("%d %d %d %d", &pa, &pb, &qa, &qb);
		if(max(pa, pb) < max(qa, qb))
			printf("P\n");
		else if(max(pa, pb) > max(qa, qb))
			printf("Q\n");
		else
			printf("TIE\n");
	}
	return 0;
}
