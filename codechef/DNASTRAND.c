#include <stdio.h>
#include <stdlib.h>

int main(void){
    int t; 
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        char *str = (char *) malloc(sizeof(char) * (n + 1));
        scanf("%s", str);
        for(int i = 0; i < n; ++i){
            switch(str[i]){
                case 'A': str[i] = 'T'; break;
                case 'T': str[i] = 'A'; break;
                case 'C': str[i] = 'G'; break;
                case 'G': str[i] = 'C'; break;
                default: break;
            }
        }
        printf("%s\n", str);
        free(str);
    }
    return 0; 
}

