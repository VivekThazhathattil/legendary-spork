#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fix(char *str){
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] == '\n' || str[i] == '\r' || str[i] == EOF){
			str[i] = '\0';
			break;
		}
		++i;
	}
	return;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		char **names = (char **) malloc(sizeof(char *) * n);
		int *blr = (int *) malloc(sizeof(int) * n);
		for(int i = 0; i < n; ++i){
			char direction[8], temp[8];
			char* name = (char *)malloc(sizeof(char) * 51);
			scanf("%s", direction, temp);
			fgets(temp, 5, stdin);

			fgets(name, 51, stdin);
			fix(name);
			names[i] = name;

			// accept each direction as a separate array (blr) element
			if(direction[0] == 'B') blr[i] = 0;
			else if(direction[0] == 'L') blr[i] = -1;
			else blr[i] = 1;
		}

		// print output
		for(int i = n - 1; i >= 0; --i){
			if(i == n - 1)
				printf("Begin on %s\n", names[i]);
			else{
				if(blr[i + 1] == 1)
					printf("Left on %s\n", names[i]);
				else
					printf("Right on %s\n", names[i]);
			}
		}

		// deallocate heap memory
		for(int i = 0; i < n; ++i)
		 	free(names[i]);
		free(names);
		free(blr);
	}
	return 0;
}
