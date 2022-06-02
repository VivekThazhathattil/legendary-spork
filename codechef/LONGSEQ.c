#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100001];
		scanf("%s", s);
		int numOnes = 0, numZeros = 0, ii = 0;
		while(s[ii] != '\0'){
			if(s[ii] == '1')
				++numOnes;
			else
				++numZeros;
			++ii;
		}
		if(numOnes == 1 || numZeros == 1)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
