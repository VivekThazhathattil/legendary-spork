#include <stdio.h>
#include <stdlib.h>

int numStonesToRemove(char* s, int n){
	if(n < 2)
		return 0;

	int i = 0, j = 1, count = 0;
	while(s[j] != '\0'){
		if(s[i] == s[j]){
			++count;
		}
		else{
			i = j;
		}
		++j;
	}
	return count;
}

int main(void){
	int n;
	scanf("%d", &n);
	char *str = (char*) malloc(sizeof(char) * (n + 1));
	scanf("%s", str);
	printf("%d", numStonesToRemove(str, n));
	free(str);
	return 0;
}
