#include <stdio.h>
#include <stdlib.h>

int compFun(const void *num1, const void *num2){
    return *(int *)num1 - *(int *)num2;
}

int min_pos(const int num1, const int num2){
    if(num1 <= 0)
        return num2;
    else if(num2 <= 0)
        return num1;
    return num1 < num2 ? num1 : num2;
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, x1, x2, count_x1 = 0, count_x2 = 0;
        int a_i = 0, b_i = 0, times = 0, flag_a = 1, flag_b = 1;
        scanf("%d", &n);
        int *a = (int *) malloc(sizeof(int) * n);
        int *b = (int *) malloc(sizeof(int) * (n - 1));
        for(int i = 0; i < n; ++i)
            scanf("%d", &a[i]);
        for(int i = 0; i < n - 1; ++i)
            scanf("%d", &b[i]);
        qsort(a, n, sizeof(int), compFun);
        qsort(b, n - 1, sizeof(int), compFun);
        x1 = b[0] - a[0];
        x2 = b[0] - a[1];
        if(n == 2)
            printf("%d\n", min_pos(x1, x2));
        else{
            //x1 case check
            while(a_i < n && b_i < n - 1){
                if(b[b_i] - x1 != a[a_i]){
                    ++times;
                    if(times == 2){
                        flag_a = 0;
                        break;
                    }
                    else
                        ++a_i;
                }
                else{
                    ++a_i;
                    ++b_i;
                }
            }
            //x2 case check
            a_i = 1; 
            b_i = 0; 
            while(a_i < n && b_i < n - 1){
                if(b[b_i] - x2 != a[a_i]){
                    flag_b = 0;
                    break;
                }
                else{
                    ++a_i;
                    ++b_i;
                }
            }
        
        if(x1 <= 0)
            flag_a = 0;
        else if(x2 <= 0)
            flag_b = 0;

        if(flag_a && !flag_b)
            printf("%d\n", x1);
        else if(!flag_a && flag_b)
            printf("%d\n", x2);
        else
            printf("%d\n", min_pos(x1, x2));

        }
        free(a);
        free(b);
    }
    return 0;
}
