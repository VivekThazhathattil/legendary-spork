#include <stdio.h>
#include <stdlib.h>

int is_odd(int num){
    return (num & 1);
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, max_len = 0, sec_max_len = 0, curr_len = 0;
        scanf("%d", &n);
        int *arr = (int *)malloc(sizeof(int) * n);
        for(int i = 0; i < n; ++i)
            scanf("%d", &arr[i]);

        int i = 0;
        while(i < n){
            if(arr[i] == 0){
                ++curr_len;
                ++i;
                if(i == n)
                    break;
            }
            else{
                if(curr_len >= max_len){
                    sec_max_len = max_len;
                    max_len = curr_len;
                }
                else if(curr_len > sec_max_len){
                    sec_max_len = curr_len;
                }
                curr_len = 0;
                ++i;
            }
        }
        if(curr_len >= max_len){
            sec_max_len = max_len;
            max_len = curr_len;
        }
        else if(curr_len > sec_max_len){
            sec_max_len = curr_len;
        }
        if(is_odd(max_len)){
            if(sec_max_len > max_len/2)
                printf("No\n");
            else
                printf("Yes\n");
        }
        else
            printf("No\n");
        free(arr);
    }
    return 0;
}
