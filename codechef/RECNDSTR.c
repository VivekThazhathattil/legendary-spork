#include <stdio.h>

int getLength(char *s){
	int i = 0;
	while(s[i] != '\0')
		++i;
	return i;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[1000001];
		scanf("%s", s);
		int n = getLength(s);
		if(n <= 2)
			printf("YES\n");
		else{
			int i = 0, flag = 0;
			while(s[i] != '\0'){
				if(i - 2 < 0){
					if(s[i] != s[n - 2 - i]){
						flag = 1;
						break;
					}
				}
				else{
					if(s[i] != s[i - 2]){
						flag = 1;
						break;
					}
				}
				++i;
			}
			if(flag)
				printf("NO\n");
			else
				printf("YES\n");
				
			}
	}
	return 0;
}
