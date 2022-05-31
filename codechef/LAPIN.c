#include <stdio.h>
#include <string.h>

int main(void){
	short t;
	scanf("%hd", &t);
	while(t--){
		char s[1001];
		int freq[26];
		memset(freq, 0, 26 * sizeof(int));
		scanf("%s", s);
		int n = strlen(s);
		for(int i = 0; i < n/2; ++i)
			++freq[s[i] - 'a'];
		for(int i = 0; i < n/2; ++i)
			--freq[s[n-1-i] - 'a'];
		int flag = 1;
		for(int i = 0; i < 26; ++i)
			if(freq[i] != 0){
				flag = 0;
				break;
			}
		printf(flag ? "YES\n" : "NO\n");
	}
	return 0;
}
