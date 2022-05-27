#include <stdio.h>
#include <stdlib.h>

void sortNums(int* arr, int size){
	for(int i = 0; i < size - 1; ++i){
		for(int j = i+1; j < size; ++j){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

char* stringify(int* arr, int size){
	char *ans = (char*)malloc(sizeof(char) * 2 * size);	
	for(int i = 0, j = 0; i < 2 * size && j < size; ++i){
		if(i%2 == 0)
			ans[i] = '0' + arr[j++];
		else
			ans[i] = '+';
	}
	ans[2*size - 1] = '\0';
	return ans;
}

int main(void){
	char s[101];
	int nums[52], count = 0, i = 0;
	scanf("%s", s);
	while(s[i] != '\0'){
		if(s[i] != '+')
			nums[count++] = s[i] - '0';
		++i;
	}
	sortNums(nums, count);
	char *ans = stringify(nums, count);
	printf("%s", ans);
	free(ans);
	return 0;
}
