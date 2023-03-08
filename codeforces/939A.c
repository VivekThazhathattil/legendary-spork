#include <stdio.h>
#include <stdlib.h>

int main(){
    int numPlanes, temp, flag = 0;
    scanf("%d", &numPlanes);
    int *links = malloc(sizeof(int)*numPlanes);
    for(int i = 0; i < numPlanes; ++i){
        scanf("%d", &temp);
        links[i] = temp - 1;
    }
    for(int i = 0; i < numPlanes; ++i){
        int pathlength = 0, curr_node = i;
        while(pathlength < 3){
            curr_node = links[curr_node];
            ++pathlength;
        }
        if(pathlength == 3 && curr_node == i){
            flag = 1;
            break;
        }
    }
    printf(flag ? "YES" : "NO");
    free(links);
    return 0;
}
