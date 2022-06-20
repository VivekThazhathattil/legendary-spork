#include <stdio.h>

typedef long long int ll;

//int numBits(ll num){
//	int bits = 0;
//	while(num){
//		++bits;
//		num >>= 1;
//	}
//	return bits;
//}

ll max(ll num1, ll num2){
	return num1 > num2 ? num1 : num2;
}

ll mostDifferingNum(ll num1, ll num2){
	ll maxNum = max(num1, num2);
	ll minNum = num1 + num2 - maxNum;

	ll diffNum = 0;
	ll twoPow = 1;

	while(maxNum != 0){
		if((maxNum&1) != (minNum&1))
			diffNum += twoPow;

		maxNum >>= 1;
		minNum >>= 1;
		twoPow *= 2;
	}
	return diffNum;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		ll a, b, n;
		scanf("%lld %lld %lld", &a, &b, &n);
		if(a == b) printf("0\n");
		else if(n <= mostDifferingNum(a, b))
			printf("-1\n");
		else printf("1\n");
	}
	return 0;
}
