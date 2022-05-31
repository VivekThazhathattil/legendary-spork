#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, goalsA = 0, goalsB = 0, chancesLeftForA, chancesLeftForB;
		scanf("%d", &n);
		char *shots = (char*) malloc(sizeof(char) * (2*n + 1));
		scanf("%s", shots);
		int store = -1;
		chancesLeftForA = n;
		chancesLeftForB = n;
		for(int i = 0; i < 2*n; ++i){
			if(i%2){ //B's shot
				if(shots[i] == '1')
					++goalsB;
				--chancesLeftForB;
			}
			if(!(i%2)){ // A's shot
				if(shots[i] == '1')
					++goalsA;
				--chancesLeftForA;
			}
			if((goalsA - goalsB > chancesLeftForB) || 
					(goalsB - goalsA > chancesLeftForA)){
				store = i+1;
				break;
			}
		}
		store == -1 ? printf("%d\n", 2*n) : printf("%d\n", store);
		free(shots);
	}
	return 0;
}
