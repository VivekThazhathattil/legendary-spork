#include <stdio.h>

int strLen(char* s){
	int len = 0;
	while(s[++len] != '\0');
	return len;
}

int v(char c){
	switch(c){
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default: return 0;
	}
	return 0;
}

int romanToInt(char* s){
	int len = strLen(s), num = 0;
	for(int i = 0; i < len; ++i){
		if(i + 1 != '\0'){
			if(v(s[i]) >= v(s[i + 1]))	
				num += v(s[i]);
			else{
				num += v(s[i + 1]) - v(s[i]);
				++i;
			}
		}
		else
			num += v(s[i]);
	}
	return num;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[16];
		scanf("%s", s);
		printf("%d\n", romanToInt(s));
	}
	return 0;
}
