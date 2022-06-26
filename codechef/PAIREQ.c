#include <stdio.h>
#include <stdlib.h>

int compFun(const void *num1, const void *num2){
    return *(int *)num1 - *(int *)num2;
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int *arr = (int *) malloc(sizeof(int) * n);
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);
        qsort(arr, n, sizeof(int), compFun);
        int max_count = 0, count = 0, ref = arr[0];
        for(int i = 0; i < n; ++i){
            if(ref == arr[i])
                ++count;
            else{
                if(count > max_count)
                    max_count = count;
                count = 1;
                ref = arr[i];
            }
        }
        if(count > max_count) 
            max_count = count;
        printf("%d\n", n - max_count);
        free(arr);
    }
    return 0;
}
