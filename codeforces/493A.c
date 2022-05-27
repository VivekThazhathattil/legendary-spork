#include <stdio.h>
#include <stdlib.h>

typedef struct player{
	int minute, number;
	char team, cardType;
} ply;

int main(void){
	char homeTeamName[21], awayTeamName[21];
	scanf("%s", homeTeamName);
	scanf("%s", awayTeamName);
	int numFouls;
	scanf("%d", &numFouls);
	ply *fouls = (ply*) malloc(sizeof(ply) * numFouls);
	for(int i = 0; i < numFouls; ++i)
		scanf("%d %c %d %c", &fouls[i].minute, &fouls[i].team,\
			 	&fouls[i].number, &fouls[i].cardType);
	for(int i = 0; i < numFouls; ++i){
		if(fouls[i].cardType == 'r'){
			}
			if(!alreadyPresent)
			printf("%s %d %d\n", fouls[i].team == 'h' ? homeTeamName : awayTeamName,\
				 	fouls[i].number, fouls[i].minute);
		}

		/* 2 yellow cards search */
		else{
			int j = i - 1;
			while(j >= 0){
				if(fouls[i].team == fouls[j].team && fouls[i].number == fouls[j].number && fouls[j].cardType == 'y'){
					printf("%s %d %d\n", fouls[i].team == 'h' ? homeTeamName : awayTeamName,\
						 	fouls[i].number, fouls[i].minute);
					break;
				}
				--j;
			}
		}
	}
	free(fouls);
	return 0;
}

