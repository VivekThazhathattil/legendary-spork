/* Idea: Form a tree, find the 
 * max depth of that tree */

#include <stdio.h>

typedef struct NODE_s{
  int id;
  int num_children;
  struct NODE_s* parent;
  struct NODE_s** children;
} node_t;

int find_max_tree_depth(const node_t* tree){

}

void free_tree(node_t* root){

}

int count_num_children(const int* a, const int k, 
    const int n){
  int i, num_children = 0;
  for(i = 0; i < n; ++i){
    if(k == a[i]){
      num_children++;
    }
  }
  return num_children;
}

node_t* create_node(const int id, const node_t** parent, 
    const int* a, const int n){
  node_t* node = (node_t*) malloc(sizeof(node_t));
  node->id = id;
  node->num_children = count_num_children(a, id, n);
  node->parent = *parent;
  if(num_children){
    node->children = 
      (node_t**) malloc(sizeof(node_t*) * node->num_children);
    int i, idx = 0;
    for(i = 0; i < n && idx < node->num_children; ++i){
      if(a[i] == node->id){
        node->children[idx] = create_node(i + 1, &node, a, n);
        ++idx;
      }
    }
  }
  else{
    node->children = NULL;
  }
  return node;
}

node_t* form_tree(const int* a, const int n){
  /* Create and initialize the root node */
  node_t* root = (node_t*) malloc(sizeof(node_t));
  /* root node is not a person, but the company itself */
  root->id = -1;
  root->parent = NULL;
  root->num_children = count_num_children(a, -1, n);

  /* create and allot the primary superiors 
   * to company node */
  root->children = 
    (node_t**) malloc(sizeof(node_t*) * root->num_children);
  int i, idx = 0;
  for(i = 0; i < n && idx < root->num_children; ++i){
    if(a[i] == -1){
      root->children[idx] = create_node(i + 1, &root, a, n);
      ++idx;
    }
  }
  
  return root;
}

int main(){
  int n, i;
  scanf("%d", &n);
  int* manager = (int*) malloc(sizeof(int) * n);
  for(i = 0; i < n; ++i){
    scanf("%d", &(a[i]));
  }

  node_t* root = form_tree(a, n);
  printf("%d\n", 
      find_max_tree_depth(root));
  free_tree(root);
  free(manager);
  return 0;
}
