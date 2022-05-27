#include <stdio.h>

int getStringLength(char* word){
	int length = 0;
	while(word[length] != '\0')
		++length;
	return length;
}

int isWordTooLong(char* word){
	return getStringLength(word) > 10;
}

char getFirstCharacter(char* word){
	return word[0];
}

char getLastCharacter(char* word){
	int stringLength = getStringLength(word);
	return word[stringLength - 1];
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char string[101];
		scanf("%s", &string);
		if(!isWordTooLong(string))
			printf("%s\n", string);
		else{
			printf("%c%d%c\n",getFirstCharacter(string),getStringLength(string) - 2, getLastCharacter(string));
		}
	}
	return 0;
}
