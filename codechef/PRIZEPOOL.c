#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int x, y;
		scanf("%d %d", &x, &y);
		printf("%d\n", 10*x + 90*y);
	}
	return 0;
}
