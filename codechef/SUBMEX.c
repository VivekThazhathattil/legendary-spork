#include <stdio.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int arrLen, subarrLen, mex;
		scanf("%d %d %d", &arrLen, &subarrLen, &mex);
		if(mex > subarrLen){
			printf("-1\n");
		}
		else if(mex == subarrLen){
			int arrElement = 0;
			for(int i = 0; i < arrLen; ++i){
				if(i < subarrLen){
					printf("%d ", i);
					++arrElement;
				}
				else
					printf("%d ", arrElement);
			}
			printf("\n");
		}
		else{
			int arrElement = mex - 1;
			for(int i = 0; i < arrLen; ++i){
				printf("%d ", arrElement);
				arrElement = --arrElement < 0 ? 0 : arrElement;
			}
			printf("\n");
		}
	}	
	return 0;
}
