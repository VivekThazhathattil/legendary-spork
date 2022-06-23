#include <stdio.h>
#include <stdlib.h>

int palindrome(int *arr, int n){
	int flag = 1;
	for(int i = 0; i < n/2; ++i){
		if(arr[i] != arr[n - 1 - i]){
			flag = 0;
			break;
		}
	}
	return flag;
}

int numbersInOrder(int *arr, int n){
	int flag = 1, start = 1;
	for(int i = 0; i < n/2; ++i){
		if(arr[i] != start){
			if(arr[i] != start + 1){
				flag = 0;
				break;
			}
			else
				++start;
		}
	}

	start = 1;
	for(int i = n - 1; i > n/2; --i){
		if(arr[i] != start){
			if(arr[i] != start + 1){
				flag = 0;
				break;
			}
			else
				++start;
		}
	}

	return flag;
}

int noExtraneousNums(int *arr, int n){
	int flag = 1;
	int count[7] = {0, 0, 0, 0, 0, 0, 0};
	for(int i = 0; i < n; ++i){
		++count[arr[i] - 1];
		if(arr[i] > 7){
			flag = 0;
			break;
		}
	}
	for(int i = 0; i < 7; ++i){
		if(count[i] == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int *arr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i)
			scanf("%d", &arr[i]);
		if(palindrome(arr, n) && numbersInOrder(arr, n) && noExtraneousNums(arr, n))
			printf("yes\n");
		else
			printf("no\n");
		free(arr);
	}
	return 0;
}
