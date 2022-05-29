#include <stdio.h>

int isCharLowerCase(char c){
	return (0 <= c - 'a' && c - 'a' < 26);
}

int isCharUpperCase(char c){
	return (0 <= c - 'A' && c - 'A' < 26);
}

int isCharSpecial(char c){
	return (c == '@' || c == '#' || c == '%' || c == '&' || c == '?');
}

int isCharDigit(char c){
	return (0 <= c - '0' && c - '0' <= 9);
}

int getStringLength(char *str){
	int len = 0;
	while(str[len] != '\0')
		++len;
	return len;
}

int lengthConditionSuccess(int len){
	return (len >= 10);
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[21];
		scanf("%s", s);
		int len = getStringLength(s);
		if(!lengthConditionSuccess(len))
			printf("NO\n");
		else{
				int hasUpperCase = 0, hasLowerCase = 0, hasDigit = 0, hasSpecial = 0;
				if(isCharLowerCase(s[0]) || isCharLowerCase(s[len - 1]))
					++hasLowerCase;
				for(int i = 1; i < len - 1; ++i){
					if(isCharLowerCase(s[i]))
						++hasLowerCase;
					else if(isCharUpperCase(s[i]))
						++hasUpperCase;
					else if(isCharDigit(s[i]))
						++hasDigit;
					else if(isCharSpecial(s[i]))
						++hasSpecial;

				}
				if(!hasUpperCase || !hasLowerCase || !hasDigit || !hasSpecial)
					printf("NO\n");
				else
					printf("YES\n");
		}

	}
	return 0;
}
