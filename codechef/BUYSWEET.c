#include <stdio.h>
#include <stdlib.h>

typedef long long int llint;

typedef struct SweetCost{
	llint actual, reduced;
} sweetCost;

int compFunc(const void* l, const void* r){
	llint L = ((sweetCost*)l)->reduced;
	llint R = ((sweetCost*)r)->reduced;
	return L - R > 0 ? 1 : (L == R ? 0 : -1) ;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int numSweets;
		llint chefMoney;
		scanf("%d %lld", &numSweets, &chefMoney);
		sweetCost *cost = (sweetCost*) malloc(sizeof(sweetCost) * numSweets);
		for(int i = 0; i < numSweets; ++i)
			scanf("%lld", &cost[i].actual);
		for(int i = 0; i < numSweets; ++i){
			scanf("%lld", &cost[i].reduced);
			cost[i].reduced = cost[i].actual - cost[i].reduced;
		}
		qsort(cost, numSweets, sizeof(sweetCost), compFunc);
		int ii = 0;
		llint count = 0;
		while(1){
			if(ii >= numSweets)
				break;
			if(chefMoney/cost[ii].actual > 0){
				llint num = chefMoney/cost[ii].actual;
				count += num;
				chefMoney = chefMoney - num*cost[ii].reduced;
			}
			else
				++ii;
		}
		printf("%lld\n", count);
		free(cost);
	}
	return 0;
}
