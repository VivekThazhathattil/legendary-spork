#include<stdio.h>
int main(){
	int arr[4], count = 0;
	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
	for(int i = 0; i < 4; ++i)
		if(arr[i] >= 10)
			++count;
	printf("%d", count);
	return 0;
}
