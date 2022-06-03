#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, arr[8], minLen = 100000000, maxLen = 0, currLen = 1;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			if(i > 0){
				if(arr[i] - arr[i-1] <= 2)
					++currLen;
				else{
					if(currLen > maxLen) maxLen = currLen;
					if(currLen < minLen) minLen = currLen;
					currLen = 1;
				}
			}
		}
		if(currLen > maxLen) maxLen = currLen;
		if(currLen < minLen) minLen = currLen;
		if(n < 2)
			printf("%d %d\n", n, n);
		else
			printf("%d %d\n", minLen, maxLen);
	}
	return 0;
}
