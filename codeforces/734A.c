#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, scoreAnton = 0;
	scanf("%d", &n);
	char *str = (char*) malloc(sizeof(char) * (n+1));
	scanf("%s", str);

	int i = 0;
	while(str[i] != '\0'){
		if(str[i] == 'A')
			++scoreAnton;
		else
			--scoreAnton;
		++i;
	}
	if(scoreAnton > 0)
		printf("Anton");
	else if(scoreAnton == 0)
		printf("Friendship");
	else
		printf("Danik");
	free(str);
	return 0;
}
