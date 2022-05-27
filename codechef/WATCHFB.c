#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, dig, a, b, ourScore = -1, oppScore = -1;
		while(n--){
			scanf("%d %d %d", &dig, a, b);
			if(dig == 1){
				printf("YES\n");
				ourScore = a;
				oppScore = b;
			}
			// dig == 2 cases:
			else if(a == b){
				ourScore = a;
				oppScore = b;
				printf("YES\n");
			}
			else{
				if(ourScore < 0 || oppScore < 0)
					printf("NO\n");

			}
		}
	}
	return 0;
}
