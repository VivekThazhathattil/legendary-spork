#include <stdio.h>
#include <stdlib.h>

struct node{
	double value;
	struct node *left_node;
	struct node *right_node;
};

typedef struct node Node;
typedef struct node BST;

double find_maximum_element(){
	double max_element = 0;
	return max_element;
}

double find_minimum_element(){
	double min_element = 0;
	return min_element;
}

int insert_element(double element_value, BST **bst){
	if(*bst == NULL){
		*bst = (BST *) malloc(sizeof(BST));
		(*bst)->value = element_value;
		(*bst)->left_node = NULL;
		(*bst)->right_node = NULL;
	}
	else{
		while(*bst != NULL)
			(*bst) = element_value <= (*bst)->value ? (*bst)->left_node : (*bst)->right_node;
		(*bst) = (Node *) malloc(sizeof(Node));
		(*bst)->value = element_value;
		(*bst)->left_node = NULL;
		(*bst)->right_node = NULL;
	}
	return 1;
}

void delete_element(double element_value, BST bst){
	return;
}

void print_bst(BST *out_bst){
	if(out_bst == NULL)
		return;
	print_bst(out_bst->left_node);
	print_bst(out_bst->right_node);
	printf("%lf ", out_bst->value);
	return;
}

int is_binary_tree(Node bst){
	return 1;
}

void find_kth_smallest_element(){
	return;
}

void sort_bst(){
	return;
}

BST* create_bst(int num_elements){
	BST *my_bst = NULL;	
	double temp_value;
	if(num_elements < 1)
		return NULL;
	printf("Please enter the values of the %d nodes:\n", num_elements);
	for(int i = 0; i < num_elements; ++i){
		scanf("%lf", &temp_value);
		if(!insert_element(temp_value, &my_bst))
			return NULL;
	}
	return my_bst;
}

int main(){
	int num_nodes = 0;
	printf("Enter the number of nodes for the tree: ");
	scanf("%d", &num_nodes);
	BST* bst = create_bst(num_nodes);
	if(bst == NULL)
		printf("create_bst failed\n");
	else{
		printf("88 %lf \n", bst->value);
		print_bst(bst);
	}
	return 0;
}

