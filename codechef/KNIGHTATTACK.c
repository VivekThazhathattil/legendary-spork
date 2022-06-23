#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x, y;
} Pos;

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		Pos piece1, piece2;
		scanf("%d %d", &piece1.x, &piece1.y);
		scanf("%d %d", &piece2.x, &piece2.y);
		int flag = 0;
		for(int i = 1; i <= 8; ++i){
			for(int j = 1; j <= 8; ++j){
				if(
						((abs(piece1.x - i) == 2 && abs(piece1.y - j) == 1) ||
						(abs(piece1.x - i) == 1 && abs(piece1.y - j) == 2) ) &&
						((abs(piece2.x - i) == 2 && abs(piece2.y - j) == 1) |
						(abs(piece2.x - i) == 1 && abs(piece2.y - j) == 2))){
					flag = 1;
					break;
				}
			}
		}
		printf(flag == 1 ? "YES\n" : "NO\n");
	}
	return 0;
}
