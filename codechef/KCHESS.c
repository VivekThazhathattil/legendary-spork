#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int x, y;
} Pos;

void initializeCheckSquares(int* arr){
		for(int i = 0; i < 3; ++i)
			for(int j = 0; j < 3; ++j)
				arr[3*i + j] = 1;
		return;
}

int unmarkedSquares(int* arr){
		for(int i = 0; i < 3; ++i)
			for(int j = 0; j < 3; ++j)
				if(arr[3*i + j] == 1) 
					return 1;
		return 0;
}

void markIfCollision(int posx, int posy, Pos k, int* mark){
	if((k.x - 1 <= posx && posx <= k.x + 1) && (k.y - 1 <= posy && posy <= k.y + 1))
		mark[3*(posy - k.y + 1) + (posx - k.x + 1)] = 0;
	return;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		Pos *knights = (Pos *) malloc(sizeof(Pos) * n);
		Pos king;
		int posx, posy;
		int checkSquares[9];
		for(int i = 0; i < n; ++i)
			scanf("%d %d", &knights[i].x, &knights[i].y);
		scanf("%d %d", &king.x, &king.y);
		initializeCheckSquares(checkSquares);
		for(int i = 0; i < n; ++i){
			markIfCollision(knights[i].x + 1, knights[i].y + 2, king, checkSquares);
			markIfCollision(knights[i].x + 1, knights[i].y - 2, king, checkSquares);
			markIfCollision(knights[i].x - 1, knights[i].y + 2, king, checkSquares);
			markIfCollision(knights[i].x - 1, knights[i].y - 2, king, checkSquares);

			markIfCollision(knights[i].x + 2, knights[i].y + 1, king, checkSquares);
			markIfCollision(knights[i].x + 2, knights[i].y - 1, king, checkSquares);
			markIfCollision(knights[i].x - 2, knights[i].y + 1, king, checkSquares);
			markIfCollision(knights[i].x - 2, knights[i].y - 1, king, checkSquares);
		}
		unmarkedSquares(checkSquares) ? printf("NO\n") : printf("YES\n");
		free(knights);
	}
	return 0;
}
