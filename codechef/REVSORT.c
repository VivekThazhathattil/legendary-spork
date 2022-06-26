#include<stdio.h>
#include <stdlib.h>

int compFun(const void* num1, const void *num2){
    return *(int *)num1 - *(int *)num2;
}

void swap(int* num1, int* num2){
    int temp = *num1;
     *num1 = *num2;
     *num2 = temp;
     return;
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x;
        scanf("%d %d", &n, &x);
        int *arr = (int *) malloc(sizeof(int) * n);
        int *sorted = (int *) malloc(sizeof(int) * n);
        for(int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
            sorted[i] = arr[i];
        }
        qsort(sorted, n, sizeof(int), compFun);
        int flag = 1, next_max, j = 0;
        for(int i = n - 1; i >= 0; --i){
            if(i > 0)
                if(sorted[i] + sorted[i - 1] <= x)
                    break;
            if(arr[i] != sorted[i]){
                j = i;
                next_max = 0;
                while(arr[j] != sorted[i] && j >= 0){
                    if(next_max < arr[j])
                        next_max = arr[j];
                    --j;
                    if(j < 0){
                        j = 0;
                        break;
                    }
                }
                if(sorted[i] + next_max > x){
                    flag = 0;
                    break;
                }
                swap(&arr[i], &arr[j]);
                //printf("yo!\n");
                //if(j < 0)
                //    i = 0;
                //else
                //    i = j;
            }
        }
        printf(flag ? "YES\n" : "NO\n");
        free(sorted);
        free(arr);
    }
    return 0;
}
