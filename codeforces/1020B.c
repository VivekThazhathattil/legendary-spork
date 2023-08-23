#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int* p = (int *) malloc(sizeof(int)*n);
    int* out = (int *) malloc(sizeof(int)*n);
    /* receive input array */
    for(int i = 0; i < n; ++i)
        scanf("%d", &p[i]);
    /* loop for each output entry */
    for(int i = 0; i < n; ++i){
        int* numHoles = (int *) calloc(n, sizeof(int));
        int j = i;
        while(numHoles[j] != 1){
            numHoles[j]++;
            j = p[j] - 1;
        }
        out[i] = j + 1;
        free(numHoles);
    }
    for(int i = 0; i < n; ++i)
        printf("%d ", out[i]);
    free(p);
    free(out);
    return 0;
}
