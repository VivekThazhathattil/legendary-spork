#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int p, q;
        scanf("%d %d", &p, &q);
        printf((p + q) % 4 == 0 || (p + q) % 4 == 1 ? "Alice\n" : "Bob\n");
    }
    return 0;
}
