#include <stdio.h>
#include <stdlib.h>

void printArray(int** mat, int m, int n){
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return;
}

void setZeroes(int** mat, int m, int* matrixColSize){
    int n = *matrixColSize;
    int *r = (int *) calloc(m, sizeof(int));
    int *c = (int *) calloc(n, sizeof(int));
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(mat[i][j] == 0){
                r[i] = 1;
                c[j] = 1;
            }
        }
    }

    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            if(r[i] == 1 || c[j] == 1)
                mat[i][j] = 0;
        }
    }
    printArray(mat, m, n);
    free(r);
    free(c);
    return;
}

int main(void){
    int m, n;
    scanf("%d %d", &m, &n);
    int **arr = (int **) malloc(sizeof(int *) * m);
    for(int i = 0; i < m; ++i){
        arr[i] = (int *) malloc(sizeof(int) * n);
        for(int j = 0; j < n; ++j)
            scanf("%d", &arr[i][j]);
    }
    setZeroes(arr, m, &n);
    for(int i = 0; i < m; ++i)
        free(arr[i]);
    free(arr);
    return 0;
}
