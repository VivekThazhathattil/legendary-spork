#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100001], match[6] = "party";
		scanf("%s", s);
		int i = 0;
		int j = 0;
		while(s[i] != '\0'){
			while(s[i] == match[j] && match[j] != '\0'){
				++i;
				++j;
			}
			if(j > 0)
				--i;
			if(j == 5){
				s[i] = 'i';
				s[i - 1] = 'r';
				s[i - 2] = 'w';
			}
			j = 0;
			++i;
		}
		printf("%s\n", s);

	}
	return 0;
}
