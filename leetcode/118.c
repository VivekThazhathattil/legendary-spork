#include <stdio.h>
#include <stdlib.h>

void printArray(int** mat, int m){
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < i + 1; ++j)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return;
}

int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    int **arr = (int **) malloc(sizeof(int *) * numRows);
    int *r = (int *) malloc(sizeof(int) * numRows);
    *returnSize = numRows;
    for(int i = 0; i < numRows; ++i){
        r[i] = i + 1;
        arr[i] = (int *)malloc(sizeof(int) * (i + 1));
        for(int j = 0; j < i + 1; ++j){
            if(j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }
    *returnColumnSizes = r;
    return arr; 
}

int main(void){
    int n;
    scanf("%d", &n);
    int m, *cols;
    int **arr = generate(n, &m, &cols);
    printArray(arr, n);
    for(int i = 0; i < n; ++i)
        free(arr[i]);
    free(arr);
    //free(cols);
    return 0;
}
