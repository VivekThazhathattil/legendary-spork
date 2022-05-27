#include <stdio.h>

int main(void){
	char str[101];
	int i = 0, alph[26], count = 0;
	for(int i = 0; i < 26; ++i)
		alph[i] = 0;
	scanf("%s", str);
	while(str[i] != '\0'){
		if(alph[ str[i] - 'a' ] == 0){
			++alph[str[i] - 'a'];
			++count;
		}
		++i;
	}
	if(count%2)
		printf("IGNORE HIM!");
	else
		printf("CHAT WITH HER!");
	return 0;
}
