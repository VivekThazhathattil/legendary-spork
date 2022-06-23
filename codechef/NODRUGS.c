#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, k, l, maxSpeed = -1, temp; 
		scanf("%d %d %d", &n, &k, &l);
		for(int i = 0; i < n - 1;  ++i){
			scanf("%d", &temp);
			if(temp > maxSpeed)
			 	maxSpeed = temp;
		}
		scanf("%d", &temp);
		if(temp > maxSpeed)
			printf("Yes\n");
		else{
			if(maxSpeed < temp + (l - 1)*k)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
