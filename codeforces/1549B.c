#include<stdio.h>
#include <stdlib.h>

int main(){
    int numTestCases;
    scanf("%d", &numTestCases);
    while(numTestCases--){
        int chessBoardLength, count = 0;
        scanf("%d", &chessBoardLength);
        char *enemyPawns = (char*)malloc(sizeof(char)*chessBoardLength + 1);
        char *gregorPawns = (char*)malloc(sizeof(char)*chessBoardLength + 1);
        scanf("%s", enemyPawns);
        scanf("%s", gregorPawns);
        for(int i = 0; i < chessBoardLength; ++i){
            if(gregorPawns[i] == '1'){
                if(enemyPawns[i] == '0'){
                    ++count;
                }
                else if(i != 0 && enemyPawns[i - 1] == '1'){
                    enemyPawns[i - 1] = '0';
                    ++count;
                }
                else if(i < chessBoardLength - 1 && enemyPawns[i + 1] == '1'){
                    enemyPawns[i + 1] = '0';
                    ++count;
                }
            }
        }
        printf("%d\n", count);
        free(enemyPawns);
        free(gregorPawns);
    }
    return 0;
}
