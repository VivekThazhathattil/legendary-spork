#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 32

int max(int num1, int num2){
    return num1 > num2 ? num1 : num2;
}

struct trie{
    long long int val;
    int  pos;
    struct trie *left;
    struct trie *right;
};

struct trie *initialize(){
    struct trie *node =
        (struct trie *) malloc(sizeof(struct trie));
    node->left = NULL;
    node->right = NULL;
    node->pos = -1;
    node->val = -1;
    return node;
}

void insert(long long int num, int location, struct trie *curr_node){
    for(int i = MAX_SIZE - 1; i >= 0; --i){
        if(num & (1 << i)){
            if(curr_node->right == NULL)
                curr_node->right = initialize();
            curr_node = curr_node->right;
        }
        else{
            if(curr_node->left == NULL)
                curr_node->left = initialize();
            curr_node = curr_node->left;
        }
    }
    curr_node->val = num;
    curr_node->pos = location;
    return;
}

int get_max_pos(struct trie* node, int max_pos, long long int num, long long int k){
    if(node == NULL)
        return max_pos;
    long long int temp = num^(node->val);
    if(node->pos > max_pos && temp >= k){
        max_pos = node->pos;
        //printf("max_pos = %d, num = %lld, node->val = %lld, temp = %lld, k = %lld\n", max_pos, num, node->val, temp, k);
    }
    int max_l = get_max_pos(node->left, max_pos, num, k);
    int max_r = get_max_pos(node->right, max_pos, num, k);
    return max_l > max_r ? max_l : max_r;
}

struct trie* get_node_with_max_pos(struct trie* node, int pos){
    if(node == NULL)
        return node;
    if(node->pos == pos)
        return node;

    struct trie *n_left = get_node_with_max_pos(node->left, pos);
    struct trie *n_right = get_node_with_max_pos(node->right, pos);

    if(n_left == NULL && n_right == NULL)
        return NULL;

    if(n_left != NULL){
        if(n_left->pos == pos)
            return n_left;
        else
            return NULL;
    }
    
    if(n_right != NULL){
        if(n_right->pos == pos)
            return n_right;
        else
            return NULL;
    }
    return NULL;
}

struct trie* query(long long int num, struct trie *curr_node, long long int k){
    long long int temp_num = 0;
    struct trie *root_node = curr_node;
    for(int i = MAX_SIZE - 1; i >= 0; --i){
        // if temp_num ^ num < k we try to maximize temp_num^num; else we traverse 
        // to the node with the biggest pos value.
        //printf("temp_num: %lld, num: %lld, k: %lld, temp_num^num: %lld\n", temp_num, num, k, temp_num^num);
        long long int temp = temp_num^num;
        if(temp < k){
            if(num & (1 << i)){
                if(curr_node->left != NULL){
                    curr_node = curr_node->left;
                }
                else{
                    curr_node = curr_node->right;
                    temp_num += (1 << i);
                }
            }
            else{
                if(curr_node->right != NULL){
                    curr_node = curr_node->right;
                    temp_num += (1 << i);
                }
                else{
                    curr_node = curr_node->left;
                }
            }
        }
        else{ // find the node where num ^ node->val >= k and pos is maximum.
            //printf("ayo... %lld\n", temp_num^num);
            int max_pos = get_max_pos(curr_node, -100, num, k);
            //printf("max_pos = %d\n", max_pos);
            struct trie *max_pos_node = get_node_with_max_pos(curr_node, max_pos);
            if(max_pos_node != NULL)
                return max_pos_node;
        }
    }
    return curr_node;
}

void free_nodes(struct trie *node){
    if(node == NULL)
        return;
    free(node->left);
    free(node->right);
    return;
}

int main(void){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, prefix_xor = 0;
        long long int k;
        scanf("%d %lld", &n, &k);
        //printf("%d %lld\n", n, k);
        int l = -2, r = n + 1;
        long long int *arr = (long long int *) malloc(sizeof(long long int) * (n + 1));

        for(int i = 1; i <= n; ++i)
            scanf("%lld", &arr[i]);

        struct trie *root = initialize();
        insert(0, 0, root);
        for(int i = 1; i <= n; ++i){
           if(arr[i] >= k){
               r = 1;
               l = 1;
               break;
           }
           prefix_xor ^= arr[i];
           insert(prefix_xor, i, root);
           struct trie *query_result = query(prefix_xor, root, k);
           //printf("query_result: val=%lld, pos=%d\n", query_result->val, query_result->pos);
           long long int val = query_result->val;
           val = val^prefix_xor;
           if(val >= k){
               if(i - (query_result->pos + 1) < r - l){
                    r = i;
                    l = query_result->pos + 1;
               }
           }
        }
        if(l == 0)
            ++l;
        if(r - l + 1 <= 0)
            printf("1\n");
        else if(r - l > n)
            printf("-1\n");
        else
            printf("%d\n", r - l + 1);

        //printf("(l,r) = (%d,%d)\n", l, r);
        free_nodes(root);
        free(arr);
    }
    return 0;
}
