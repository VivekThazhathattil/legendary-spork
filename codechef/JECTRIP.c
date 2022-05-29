#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[51];
		int alf[26];
		scanf("%s", &s);
		for(int i = 0; i < 26; ++i)
			alf[i] = 0;
		int ii = 0;
		while(s[ii] != '\0'){
			++alf[s[ii] - 'a'];
			++ii;
		}
		int flag = 0;
		for(int i = 0; i < 26; ++i){
			if(alf[i] == 0){
				flag = 1;
				printf("%c\n", 'a' + i);
				break;
			}
		}
		if(flag == 0)
			printf("-1\n");
	}
	return 0;
}
