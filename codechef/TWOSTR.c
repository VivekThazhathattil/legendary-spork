#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char x[11], y[11];
		scanf("%s", x);
		scanf("%s", y);
		int i = 0, flag = 1;
		while(x[i] != '\0'){
			if(y[i] == '\0'){
				flag = 0;
				break;
			}
			if(x[i] != y[i])
				if(x[i] != '?' && y[i] != '?'){
					flag = 0;
					break;
				}
			++i;
		}
		if(flag)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
