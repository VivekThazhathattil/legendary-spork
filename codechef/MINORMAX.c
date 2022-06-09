#include <stdio.h>

void swap(int* num1, int* num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;	
	return;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, min, max, checkPoint = 0, temp;
		scanf("%d", &n);
		scanf("%d", &min);
		int flag = 1;
		for(int i = 1; i < n; ++i){
			scanf("%d", &temp);
			if(!checkPoint){
				max = temp;
				if(max < min)
					swap(&min, &max);
				checkPoint = 1;
			}
			else{
				if(min < temp && temp < max)
					flag = 0;
				else if( temp < min)
					min = temp;
				else if (temp > max)
					max = temp;
			}
		}
		if(n <= 2)
			flag = 1;
		printf(flag ? "YES\n" : "NO\n");
	}
	return 0;
}
