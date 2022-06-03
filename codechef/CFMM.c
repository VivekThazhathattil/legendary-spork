#include <stdio.h>

int getLength(char* s){
	int i = 0;
	while(s[i] != '\0')
		++i;
	return i;
}

void updateCharCounts(int* a, char* s){
	int n = getLength(s);
	for(int i = 0; i < n; ++i){
		switch(s[i]){
			case 'c': ++a[0]; break;
			case 'o': ++a[1]; break;
			case 'd': ++a[2]; break;
			case 'e': ++a[3]; break;
			case 'h': ++a[4]; break;
			case 'f': ++a[5]; break;
			default: break;
		}
	}
	return;
}

int findMin(int* a){
	int min = 10000000;
	for(int i = 0; i < 6; ++i){
		if(i == 0 || i == 3)
			a[i] = a[i]/2;
		if(a[i] < min)
				min = a[i];
	}
	return min;
}


int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, arr[6];
		scanf("%d", &n);
		char str[1001];
		for(int i = 0; i < 6; ++i)
			arr[i] = 0;
		for(int i = 0; i < n; ++i){
			scanf("%s", str);
			updateCharCounts(arr, str);
		}
		printf("%d\n", findMin(arr));
	}
	return 0;
}
