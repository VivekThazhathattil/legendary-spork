#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};


bool checkTree(struct TreeNode* root){
	return (root->val == root->left->val + root->right->val);
}

void initNode(struct TreeNode* node, int val){
	node->val = val;
	node->left = NULL;
	node->right = NULL;
	return;
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int vals[3];
		for(int i = 0; i < 3; ++i)
			scanf("%d", &vals[i]);
		struct TreeNode treeNode;
		initNode(&treeNode, vals[0]);
		struct TreeNode* node1 = (struct TreeNode*) malloc(sizeof(struct TreeNode));
		struct TreeNode* node2 = (struct TreeNode*) malloc(sizeof(struct TreeNode));
		initNode(node1, vals[1]);
		initNode(node2, vals[2]);
		treeNode.left = node1;
		treeNode.right = node2;
		if(checkTree(&treeNode))
			printf("True\n");
		else
			printf("False\n");
	}
	return 0;
}
