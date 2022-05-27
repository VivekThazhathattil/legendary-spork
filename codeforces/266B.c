#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, t;
	scanf("%d %d", &n, &t);	
	char *queue = (char *) malloc( sizeof(char) * (n + 1));
	scanf("%s", queue);
	for(int i = 0; i < t; ++i){
		int prev_idx = 0;
		int curr_idx = 1;
		while(curr_idx < n){
			if(queue[prev_idx] == 'B' && queue[curr_idx] == 'G'){
				queue[curr_idx] = 'B';
				queue[prev_idx] = 'G';
				prev_idx += 2;
				curr_idx += 2;
			}
			else{
				++prev_idx;
				++curr_idx;
			}
		}
	}
	printf("%s", queue);
	free(queue);
	return 0;
}
