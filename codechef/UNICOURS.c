#include <stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, maxPrereq = 0, temp;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &temp);
			if(temp > maxPrereq)
				maxPrereq = temp;
		}
		printf("%d\n", n - maxPrereq);
	}
	return 0;
}
