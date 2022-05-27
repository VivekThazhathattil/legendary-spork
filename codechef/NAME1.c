#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		char a[40001], b[40001];
	 	int	letterCount[26], flag = 1;

		// initialize letterCount array to zero
		for(int i = 0; i < 26; ++i)
			letterCount[i] = 0;

		// read strings a & b
		scanf("%s %s", &a, &b);

		// put count of each character of a & b in letterCount
		int idx = 0;
		while(a[idx] != '\0'){
			letterCount[ a[idx] - 'a']++;
			++idx;
		}

		idx = 0;
		while(b[idx] != '\0'){
			letterCount[ b[idx] - 'a']++;
			++idx;
		}
		
		// accept the number of children
		int numChildren;	
		scanf("%d", &numChildren);

		// get each child and strike off it's characters from letterCount.
		// If not possible, print NO
		char tempChild[40001];
		for(int i = 0; i < numChildren; ++i){
			scanf("%s", &tempChild);
			idx = 0;
			while(tempChild[idx] != '\0'){
				letterCount[tempChild[idx] - 'a']--;
				if(letterCount[tempChild[idx] - 'a'] < 0){
					flag = 0;
					break;
				}
				++idx;
			}
		}

		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
