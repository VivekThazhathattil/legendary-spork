#include <stdio.h>

#define LEN 35

typedef long long int ll;

/*
void printArray(int *arr){
	for(int i = 0 ; i < LEN; ++i)
		printf("%d ", arr[i]);
	printf("\n");
	return;
}
*/


void fillArray(ll num, int* arr){
	for(int i = 0; i < LEN; ++i){
		if(num&1) arr[i] = 1;
		else arr[i] = 0;
		num >>= 1;
	}
	return;
}

void pushBits(int *arr, int idx){
	while(arr[idx] == 1){
		arr[idx] = 0;
		++idx;
	}
	arr[idx] = 1;
	//printArray(arr);
	return;
}

ll power(ll base, ll i){
	ll res = 1;
	while(i--)
		res *= base;
	return res;
}

ll updateNumFromBits(int *arr){
	ll result = 0;
	for(int i = 0; i < LEN; ++i)
		if(arr[i] == 1)
			result += power(2, i);
	//printf("number = %lld\n", result);
	return result;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		ll a, b, c;
		int arrA[LEN], arrB[LEN], arrC[LEN];
		scanf("%lld %lld %lld", &a, &b, &c);
		fillArray(a, arrA);
		fillArray(b, arrB);
		fillArray(c, arrC);
		// printArray(arrA);
		// printArray(arrB);
		// printArray(arrC);
		int flag = 1, i = 0;
		for(; i < LEN; ++i){
			if(a == b && b == c)
				break;
			if(arrA[i] == arrB[i] && arrB[i] == arrC[i]){
				flag = 0;
				break;
			}
			else if(arrA[i] == arrB[i]){
				if(arrA[i] == 0) pushBits(arrC, i);
				else arrC[i] = 1;
				c = updateNumFromBits(arrC);
			}
			else if(arrB[i] == arrC[i]){
				if(arrB[i] == 0) pushBits(arrA, i);
				else arrA[i] = 1;
				a = updateNumFromBits(arrA);
			}
			else if(arrA[i] == arrC[i]){
				if(arrA[i] == 0) pushBits(arrB, i);
				else arrB[i] = 1;
				b = updateNumFromBits(arrB);
			}
		}
		if(i == LEN)
			flag = 0;

		printf(flag == 1 ? "YES\n" : "NO\n");
	}
	return 0;
}
