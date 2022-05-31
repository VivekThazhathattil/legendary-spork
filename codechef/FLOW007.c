#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[8], rev[8];
		scanf("%s", s);
		int n = strlen(s);
		for(int i = 0; i < n; ++i)
			rev[i] = s[n-1-i];
		rev[n] = '\0';
		printf("%d\n", atoi(rev));
	}
	return 0;
}
