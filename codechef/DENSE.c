#include <stdio.h>
#include <stdlib.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		char *arr = (char *) malloc(sizeof(char) * (n + 1));
		scanf("%s", arr);
		int i = 0, j = n - 1, num_removed_elements = 0;
		while(i <= j){
			if(arr[i] != '('){
				++num_removed_elements;
				++i;
			}
			else if(arr[j] != ')'){
				++num_removed_elements;
				--j;
			}
			else{
				++i;
				--j;
			}
		}
		printf("%d\n", num_removed_elements);
		free(arr);
	}
	return 0;
}
