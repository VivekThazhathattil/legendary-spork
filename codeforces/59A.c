#include <stdio.h>

struct counts{
	int upcase, locase;
};

typedef struct counts cts;

int isLowerCase(char c){
		return (c - 'a' >= 0 && c	- 'a' < 26);
}

cts getCounts(char* s){
	cts a = {0,0};
	int i = 0;
	while(s[i] != '\0'){
		if(isLowerCase(s[i]))
			++a.locase;
		else
			++a.upcase;
		++i;
	}
	return a;
}

void correctCase(char* s, cts a, char caseLetter){
	int i = 0;
	while(s[i] != '\0'){
		if(isLowerCase(s[i]))
			s[i] = s[i] - 'a' + caseLetter;
		else
			s[i] = s[i] - 'A' + caseLetter;
		++i;
	}

}

int main(void){
	char str[101];
	scanf("%s", str);
	cts c = getCounts(str);
	if(c.locase >= c.upcase)
		correctCase(str, c, 'a');
	else
		correctCase(str, c, 'A');

	printf("%s", str);
	return 0;
}
