#include <stdio.h>
#include <stdlib.h>

struct l_node{
    int num, count;
    struct l_node *next;
};

void initialize_node(int num, struct l_node *curr_node){
    struct l_node *node = (struct l_node *) malloc(sizeof(struct l_node));
    node->num = num;
    node->count = 0;
    node->next = NULL;
    curr_node->next = node;
}

void update_count(int prime, struct l_node *curr_node, count){
    while(curr_node != NULL){
        if(curr_node->num == prime){
            curr_node->count += count;
            return;
        }
        curr_node = curr_node->next;
    }
    initialize_node(prime, curr_node);
    (curr_node->next)->count = count;
    return;
}

void free_nodes(struct l_node *node){
    struct l_node *temp;
    while(node != NULL){
        temp = node->next;
        free(node);
        node = temp;
    }
    return;
}

void put_factors(int a, int* f, struct l_node *root_node){
    int i = 2;
    int count = 0;
    while(i < a && a > 1){
        if(a % i == 0){
            a /= i;
            ++count;
        }
        else{
            update_count(i, root_node, count);
            ++i;
            count = 0;
        }
    }
    if(count > 0)
        update_count(i, root_node, count);
    return;
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int *arr = (int *)malloc(sizeof(int) * n);
        struct l_node *root;
        for(int i = 0; i < n; ++i){
            scanf("%d", &arr[i]);
            put_factors(arr[i], );
        }
        int num_distinct_factors = 0;
        for(int i = 0; i < 1000; ++i)
            num_distinct_factors *= (factors[i] + 1);
        printf("%d\n", num_distinct_factors);
        free(arr);
        free_nodes(root);
    }
    return 0;
}
