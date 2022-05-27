#include <stdio.h>
#include <stdlib.h>

void sortTasks(int *tasks){

}
int factorial(n){
	int result = 1;
	for(int i = 1; i <= n; ++i)
		result *= i;
	return result;
}

int numWays(int size, int* tasks){
	int ways = 1, count = 0, i = 1, prev = tasks[0];
	while(i < size){
		if(prev == tasks[i])	
			++count;
		else{
			ways *= factorial(count);
			count = 1;
			prev = task[i];
		}
		++i;
	}
	return	ways * factorial(count);
}

int main(void){
	int n, *arr;
	arr = (int *) malloc(sizeof(int) * n);
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	sortTasks(arr);
	if(numWays(n, arr) >= 3){
		printf("YES\n");

	}
	else
		printf("NO\n");
	return 0;
}
