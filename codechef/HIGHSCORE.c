#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, arr[4], max = -1;
		scanf("%d", &n);
		scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
		for(int i = 0; i < 4; ++i)
			if(max < arr[i])
				max = arr[i];
		printf("%d\n", max);
	}
}
