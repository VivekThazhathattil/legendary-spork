#include<stdio.h>

int absol(int x){
	return x < 0 ? -x : x;
}
int main(void){
	int tempNum, oneRow = 0, oneCol = 0;
	for(int i = 0; i < 5; ++i)
		for(int j = 0; j < 5; ++j){
			scanf("%d", &tempNum);
			if(tempNum == 1){
				oneRow = i;
				oneCol = j;
			}
		}

	printf("%d", absol(oneRow - 2) + absol(oneCol - 2));
	
	return 0;
}
