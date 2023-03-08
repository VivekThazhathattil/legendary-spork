#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    char **field = (char**) malloc(sizeof(char*)*rows);
    /* accept input */
    for(int i = 0; i < rows; ++i){
        char *temp = (char*) malloc(sizeof(char)*cols + 1);
        scanf("%s", temp);
        field[i] = temp;
    }

    /* insert doggos and check for conflict tiles */
    int sheepLoss = 0;
    for(int i = 0; i < rows; ++i){
        for(int j = 0; j < cols; ++j){
            if(field[i][j] == 'S'){
                /* handle top tile */
                if(i != 0){
                    if(field[i - 1][j] == '.')
                        field[i - 1][j] = 'D';
                    else if(field[i - 1][j] == 'W')
                        sheepLoss = 1;
                }
                /* handle bottom tile */
                if(i != rows - 1){
                    if(field[i + 1][j] == '.')
                        field[i + 1][j] = 'D';
                    else if(field[i + 1][j] == 'W')
                        sheepLoss = 1;
                }
                /* handle left tile */
                if(j != 0){
                    if(field[i][j - 1] == '.')
                        field[i][j - 1] = 'D';
                    else if(field[i][j - 1] == 'W')
                        sheepLoss = 1;
                }
                /* handle right tile */
                if(j != cols - 1){
                    if(field[i][j + 1] == '.')
                        field[i][j + 1] = 'D';
                    else if(field[i][j + 1] == 'W')
                        sheepLoss = 1;
                }
            }
        }
    }

    /* display output */
    printf(sheepLoss ? "NO\n" : "YES\n");
    if(!sheepLoss){
        for(int i = 0; i < rows; ++i){
            for(int j = 0; j < cols; ++j){
                printf("%c", field[i][j]);
            }
            printf("\n");
        }
    }

    /* free heap allocated vars */
    for(int i = 0; i < rows; ++i){
        free(field[i]);
    }
    free(field);
    return 0;
}
