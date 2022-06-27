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

struct sNode{
    struct trie *t;
    struct sNode *next;
};

void push(struct sNode** top_ref, struct trie *t){
    struct sNode* new_trie_node = (struct sNode*) malloc(sizeof(struct sNode));
    new_trie_node->t  = t;
    new_trie_node->next = *top_ref;
    *top_ref = new_trie_node;
}

struct trie *pop(struct sNode** top_ref){
    struct trie *res;
    struct sNode *top;
    top = *top_ref;
    res = top->t;
    *top_ref = top->next;
    free(top);
    return res;
}

int is_empty(struct sNode *top){
   return (top == NULL)? 1 : 0;
}

struct trie *get_node_with_max_pos(struct trie *root, long long int num, long long int k, int idx){
    struct trie *current = root, *answer = root, previous;
    struct sNode *s = NULL;
    int  done = 0;
    int max_pos = -1;
    while (!done){
        if(current !=  NULL){
            long long int temp = num^(current->val);
            if(current->right != NULL || temp >= k)
                push(&s, current);
            current = current->left;
        }
        else{
            if (!is_empty(s)){
                current = pop(&s);
                long long int temp = num^(current->val);
                if(temp >= k && current->pos > max_pos){
                    max_pos = current->pos;
                    answer = current;
                }
                current = current->right;
            }
            else
                done = 1;
        }
    }
    //printf("num: %lld, (%lld, %d)---\n", num, answer->val, answer->pos);
    return answer;
}

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
    //printf("current_node->val::: %lld -----> %lld\n", curr_node->val, num);
    curr_node->val = num;
    curr_node->pos = location;
    return;
}

struct trie* query(long long int num, struct trie *curr_node, long long int k, long long int *px, int r, int n){
    long long int temp_num = 0;
    struct trie *root_node = curr_node, *prev_node = curr_node;
    for(int i = MAX_SIZE - 1; i >= 0; --i){
        // if temp_num ^ num < k we try to maximize temp_num^num; else we traverse 
        // to the node with the biggest pos value.
        //printf("temp_num: %lld, num: %lld, k: %lld, temp_num^num: %lld\n", temp_num, num, k, temp_num^num);
        long long int temp = temp_num^num;
        if(temp < k){
            if(num & (1 << i) == 0 && k & (1 << i) == 1)
                return curr_node;
            if(num & (1 << i)){
                if(curr_node->left != NULL){
                    prev_node = curr_node;
                    curr_node = curr_node->left;
                }
                else{
                    if(k & (1 << i))
                        return curr_node;
                    prev_node = curr_node;
                    curr_node = curr_node->right;
                    temp_num += (1 << i);
                }
            }
            else{
                if(curr_node->right != NULL){
                    prev_node = curr_node;
                    curr_node = curr_node->right;
                    temp_num += (1 << i);
                }
                else{
                    prev_node = curr_node;
                    curr_node = curr_node->left;
                }
            }
        }
        else{ // find the node where num ^ node->val >= k and pos is maximum.
            
            //struct trie *max_pos_node = get_node_with_max_pos(prev_node, num, k, i + 1);
            //if(max_pos_node != NULL)
            //    return max_pos_node;

            int max_pos = -1;
            long long int req = -1;
            for(int j = r - 1; j >= 0; --j){
                long long int temp = px[j]^num;
                if(temp >= k){
                    req = px[j];
                    max_pos = j;
                    break;
                }
            }
            if(max_pos != -1){
                //printf("max_pos = %lld\n", max_pos);
                struct trie *n = initialize();
                n->pos = max_pos;
                n->val = req;
                return n;
            }
                
        }
    }
    return curr_node;
}

void free_nodes(struct trie *node){
    if(node == NULL)
        return;
    free_nodes(node->left);
    free_nodes(node->right);
    free(node);
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
        long long int *pxa = (long long int *) malloc(sizeof(long long int) * (n + 1));

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
           pxa[i] = prefix_xor;
           struct trie *query_result = query(prefix_xor, root, k, pxa, i, n);
           //printf("query_result: val=%lld, pos=%d\n", query_result->val, query_result->pos);
           long long int val = query_result->val;
           val = val^prefix_xor;
           if(val >= k){
               if(i - (query_result->pos + 1) < r - l){
                    r = i;
                    l = query_result->pos + 1;
               }
               if(l - r + 1 == 2)
                   break;
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
        //free_nodes(root);
        free(arr);
        free(pxa);
    }
    return 0;
}
