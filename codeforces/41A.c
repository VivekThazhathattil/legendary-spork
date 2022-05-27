#include <stdio.h>

int getLength(char* s){
	int count = 0;
	while(s[count] != '\0')
		++count;
	return count;
}

int main(void){
	char a[101], b[101];
	scanf("%s", a);
	scanf("%s", b);
	int na = getLength(a);
	int nb = getLength(b);

	int flag = 0;
	if(na != nb)
		flag = 1;
	else{
		for(int i = 0; i < na; ++i)
			if(a[i] != b[na - 1 - i]){
				flag = 1;
				break;
			}
	}
	if(flag)
		printf("NO");
	else
		printf("YES");
	return 0;
}
