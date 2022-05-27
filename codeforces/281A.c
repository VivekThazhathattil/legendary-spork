#include <stdio.h>

char getUppercase(char c){
	return (c - 'a' >= 0  && c - 'a' < 26) ? c - 'a' + 'A' : c;
}

int main(){
	char str[1001];
	scanf("%s", str);
	int i = 0;
	while(str[i] != '\0'){
		if(i == 0)
			printf("%c", getUppercase(str[i]));
		else
			printf("%c", str[i]);
		++i;
	}
}
