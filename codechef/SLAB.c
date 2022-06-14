#include <stdio.h>

typedef struct{
	int from, to, taxRate, diff;
} slab;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int myIncome, totalTax = 0;
		scanf("%d", &myIncome);
		slab s[7] = {
			{-1, 			250000, 	0, 	250000},
		 	{250000, 	500000, 	5, 250000},
		 	{500000,	750000, 	10, 250000},
		 	{750000,	1000000, 	15,	250000},
		 	{1000000,	1250000, 	20,	250000},
		 	{1250000,	1500000, 	25,	250000},
			{1500000, myIncome,	30,	myIncome - 1500000}
		};
		for(int i = 0; i < 7; ++i){
			if(s[i].from < myIncome){
				if(myIncome <= s[i].to)
					totalTax += s[i].taxRate*(myIncome - s[i].from)/100;
				else
					totalTax += s[i].taxRate*s[i].diff/100;
			}	
			else
				break;
		}
		printf("%d\n", myIncome - totalTax);
	}
	return 0;
}
