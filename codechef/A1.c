#include <stdio.h>
#include <stdlib.h>

int policyCheck(int* arr, int n, int m, int idx){
	for(int i = idx; i < n; ++i){
		if(arr[i] == m)
			return 1;
		else if(arr[i] < m)
			if(policyCheck(arr, n, m - arr[i], i+1))
				return 1;
	}
	return 0;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int numNotes, mobsterDemandMoney, *notes;
		scanf("%d %d", &numNotes, &mobsterDemandMoney);
		notes = (int *) malloc(sizeof(int) * numNotes);
		for(int i = 0; i < numNotes; ++i)
			scanf("%d", &notes[i]);
		if(policyCheck(notes, numNotes, mobsterDemandMoney, 0))
			printf("Yes\n");
		else
			printf("No\n");
		free(notes);
	}
	return 0;
}
