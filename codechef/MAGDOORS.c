#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[100001];
		scanf("%s", &s);
		int openDoor = 1, i = 0, count = 0;
		while(s[i] != '\0'){
			if(s[i] - '0' != openDoor){
					openDoor ^= 1;	// use XOR(^) to toggle; 1^1 = 0 and 0^1 = 1
					++count; // count the number of wand usage	
			}
			++i;
		}
		printf("%d\n", count);
	}
	return 0;
}
