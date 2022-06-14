#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		char *a, *b;
		scanf("%d", &n);
		a = (char *)malloc(sizeof(char) * (n + 1));
		b = (char *)malloc(sizeof(char) * (n + 1));
		scanf("%s", a);
		scanf("%s", b);
		int numOps = 0, *alph;
		alph = (int *)calloc(26, sizeof(int));
		for(int i = 0; i < n; ++i){
			if((a[i] != b[i]) && (alph[b[i] - 'a'] == 0)){
				++alph[b[i] - 'a'];
				++numOps;
			}
		}
		printf("%d\n", numOps);
		free(alph);
		free(a);
		free(b);
	}
	return 0;
}
