#include <stdio.h>

long long int min(long long int x, long long int y){
	return x < y ? x : y;
}

void swap(long long int *x, long long int *y){
	long long int temp = *x;
	*x = *y;
	*y = temp;
}

long long int getMinOps(long long int x, long long int y){
	long long int count = 0;
	while(1){
		if(x == 0 && y == 0)
			break;
		if(x == y){
			count += x;
			break;
		}
		if(x != 1){
			count += x - 1;
			y -= (x - 1);
			x = 1;
		}
		else{
			if(x > y)
				swap(&x, &y);
			else{
				while(x <= y){
					x = 2*x;
					++count;
				}
				x = x/2;
				--count;
			}
		}
	}
	return count;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int x, y;
		scanf("%lld %lld", &x, &y);
		if(x > y)
			swap(&x, &y);
		if(x == 0 && y == 0)
			printf("0\n");
		else if(x == 0 || y == 0)
			printf("-1\n");
		else
			printf("%lld\n", getMinOps(x, y));
	}
	return 0;
}
