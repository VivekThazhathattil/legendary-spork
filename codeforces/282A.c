#include <stdio.h>

int main(void){
	int n, xVal = 0;
	char instr[4];
	scanf("%d", &n);
	while(n--){
		scanf("%s", instr);
		if(instr[1] == '+')
			++xVal;
		else
			--xVal;
	}
	printf("%d", xVal);
	return 0;
}	
