#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, arr[1001], currDeg;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i){
			scanf("%d", &arr[i]);
			if(arr[i])
				currDeg = i;
		}
		printf("%d\n", currDeg);
	}
	return 0;
}
