#include <stdio.h>
#include <stdlib.h>

int main(void){
    char kicks[21];
    while(gets(kicks)){
        kicks[20] = '\0';
        int i = 0;
        int score_a = 0, score_b = 0,
            num_tries_left_a = 5, num_tries_left_b = 5;
        char flag = 'x';
        while(i < 10){
            if(i % 2){
                score_b += kicks[i] - '0';
                --num_tries_left_b;
            }
            else{
                score_a += kicks[i] - '0';
                --num_tries_left_a;
            }
            if(score_b - score_a > num_tries_left_a){
                flag = 'b';
                break;
            }
            else if(score_a - score_b > num_tries_left_b){
                flag = 'a';
                break;
            }
            ++i;
        }
        if(flag == 'x')
            while(i < 19){
                if(kicks[i] > kicks[i + 1]){
                    ++i;
                    flag = 'a';
                    break;
                }
                else if(kicks[i] < kicks[i + 1]){
                    ++i;
                    flag = 'b';
                    break;
                }
                i += 2;
            }
        if(flag == 'x')
            printf("TIE\n");
        else if(flag == 'a')
            printf("TEAM-A %d\n", i + 1);
        else
            printf("TEAM-B %d\n", i + 1);
    }
    return 0;
}
