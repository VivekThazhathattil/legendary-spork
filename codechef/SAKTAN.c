#include <stdio.h>
#include <stdlib.h>

typedef long long int ll;

int compFun(const void *num1, const void *num2){
	return *(int *)num1 - *(int *)num2;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int numRows, numCols, numOps;
		scanf("%d %d %d", &numRows, &numCols, &numOps);
		int *rows = (int *) malloc(sizeof(int) * numOps);
		int *cols = (int *) malloc(sizeof(int) * numOps);
		for(int i = 0; i < numOps; ++i){
			scanf("%d", &rows[i]);
			scanf("%d", &cols[i]);
		}
		qsort(rows, numOps, sizeof(int), compFun);
		qsort(cols, numOps, sizeof(int), compFun);
		int count = 1, rowCount = 0, colCount = 0;

		int ref = rows[0];
		for(int i = 1; i < numOps; ++i){
			if(ref == rows[i])
				++count;
			else{
				if(count&1)
					++rowCount;
				count = 1;
				ref = rows[i];
			}
		}
		if(count&1)
			++rowCount;

		ref = cols[0];
		count = 1;
		for(int i = 1; i < numOps; ++i){
			if(ref == cols[i])
				++count;
			else{
				if(count&1)
					++colCount;
				count = 1;
				ref = cols[i];
			}
		}
		if(count&1)
			++colCount;

		ll ans = ((ll)(rowCount) * (ll)(numCols)) + ((ll)(colCount) * (ll)(numRows)) - (2 * (ll)(rowCount) * (ll)(colCount));
		printf("%lld\n", ans);
		free(rows);
		free(cols);
	}
	return 0;
}
