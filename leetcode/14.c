#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char **arr, int n){
	char *s = (char*) malloc(sizeof(char) * 201);
	int len = 0;
	while(1){
		int i = 0, flag = 0;
		char c = arr[0][len];
		for(; i < n; ++i){
			if(arr[i][len] == '\0'){
				flag = 1;
				break;
			}
			if(c != arr[i][len])
				break;
		}
		if(flag)
			break;
		if(i == n){
			s[len] = arr[0][len];
			++len;
		}
		else
			break;
	}
	s[len] = '\0';
	return s;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		char **s = (char **) malloc(sizeof(char*) * n);
		for(int i = 0; i < n; ++i){
			char *str = (char *) malloc(sizeof(char) * 201);
			scanf("%s", str);
			s[i] = str;
		}
		char *ans = longestCommonPrefix(s, n);
		printf("%s", ans);
		for(int i = 0; i < n; ++i)
			free(s[i]);
		free(s);
		free(ans);
	}
	return 0;
}
