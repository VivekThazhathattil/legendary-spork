#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int compFun(const void *num1, const void *num2){
    return *(int *)num1 - *(int *)num2;
}

bool containsDuplicate(int* nums, int numsSize){
    qsort(nums, numsSize, sizeof(int), compFun);
    if(numsSize == 1)
        return false;
    for(int i = 0 ; i < numsSize - 1; ++i){
        if(nums[i] == nums[i+1])
            return true;
    }
    return false;
}

int main(void){
    int n;
    scanf("%d", &n);
    int *arr = (int *) malloc(sizeof(int) * n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);
    if(containsDuplicate(arr, n))
        printf("true");
    else
        printf("false");
    free(arr);
    return 0;
}
