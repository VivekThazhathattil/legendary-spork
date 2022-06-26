#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 32

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

struct trie* query(long long int num, struct trie *curr_node, long long int k){
    long long int temp_num = 0;
    for(int i = MAX_SIZE - 1; i >= 0; --i){
        if(temp_num < k){
            temp_num += num & (1 << i);
            if(num & (1 << i)){
                if(curr_node->left != NULL)
                    curr_node = curr_node->left;
                else
                    curr_node = curr_node->right;
            }
            else{
                if(curr_node->right != NULL)
                    curr_node = curr_node->right;
                else
                    curr_node = curr_node->left;
            }
        }
        else{
            if(num & (1 << i)){
                if(curr_node->right != NULL)
                    curr_node = curr_node->right;
                else
                    curr_node = curr_node->left;
            }
            else{
                if(curr_node->left != NULL)
                    curr_node = curr_node->left;
                else
                    curr_node = curr_node->right;
            }
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
           long long int val = query_result->val;
           val = val^prefix_xor;
           if(val >= k){
               if(i - query_result->pos < r - l){
                    r = i;
                    l = query_result->pos;
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
