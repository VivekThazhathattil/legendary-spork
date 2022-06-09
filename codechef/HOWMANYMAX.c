#include <stdio.h>
#include <stdlib.h>

int countOneIslands(char *s, int n){
	int count = 0, i = 0;
	while(1){
		if(s[i] == '\0')
			break;
		if(s[i] == '1'){
			++count;
			while(s[i] == '1') ++i;
		}
		while(s[i] == '0') ++i;
	}
	return count;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		char *s = (char *) malloc(sizeof(char) * (n+1));
		scanf("%s", s);
		s[n-1] = '1';
		s[n] = '\0';
		printf("%d\n", countOneIslands(s, n));
		free(s);
	}
}
