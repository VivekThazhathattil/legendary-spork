// Brute Force Method - gives TLE for 7 cases
/*
#include <stdio.h>
#include <stdlib.h>

int subarrayCondSatsified(int l, int r, int* arr){
	int reqNum = r - l + 1;
	for(int i = l; i <= r; ++i)
		if(reqNum == arr[i])
			return 1;
	return 0;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, *arr;
		scanf("%d", &n);
		arr = (int*) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		int count = 0;
		for(int L = 0; L < n; ++L)
			for(int R = L; R < n; ++R)
				if(subarrayCondSatsified(L, R, arr))
					++count;
		printf("%d\n", count);
		free(arr);
	}
	return 0;
}
*/


