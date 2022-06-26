#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int p;
        scanf("%d", &p);
        int num_solved = 0;
        while(p > 0){
            if(p >= 100)
                p -= 100;
            else
                --p;
            ++num_solved;
        }
        if(num_solved > 10)
            printf("-1\n");
        else
            printf("%d\n", num_solved);
    }
    return 0;
}
