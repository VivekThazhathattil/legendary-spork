#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* swapPairs(struct ListNode* head){
	if(head == NULL || head->next == NULL)
		return head;
	struct ListNode *currNode, *prevNode, *dummyNode;
	dummyNode = (struct ListNode*) malloc(sizeof(struct ListNode));
	dummyNode->val = -1;
	dummyNode->next = head;
	prevNode = dummyNode;
	currNode = prevNode->next;
	while(currNode != NULL && currNode->next != NULL){
		prevNode->next = currNode->next;
		currNode->next = prevNode->next->next;
		prevNode->next->next = currNode;

		prevNode = currNode;
		currNode = currNode->next;
	}
	head = dummyNode->next;
	free(dummyNode);
	return head;
}

void initNode(struct ListNode* node, int val){
	node->val = val;
	node->next = NULL;
	return;
}

void freeNodes(struct ListNode* tracker){
	while(tracker != NULL){
		struct ListNode* temp = tracker;
		tracker = tracker->next;
		temp->next = NULL;
		free(temp);
	}
}

void printNodes(struct ListNode* tracker){
	printf("Printing\n");
	while(tracker != NULL){
		printf("%d ", tracker->val);
		tracker = tracker->next;
	}
	printf("\n");
}

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		struct ListNode* head = (struct ListNode*) malloc(sizeof(struct ListNode));
		struct ListNode* tracker;
		int temp;
		for(int i = 0; i < n; ++i){
			scanf("%d", &temp);
			if(!i){
				initNode(head, temp);
				tracker = head;
			}
			else{
				struct ListNode* nodePtr = (struct ListNode*) malloc(sizeof(struct ListNode));
				initNode(nodePtr, temp);
				tracker->next = nodePtr;
				tracker = tracker->next;
			}
		}
		printNodes(head);
		struct ListNode* newHead = swapPairs(head);
		printNodes(newHead);
		freeNodes(newHead);
	}
	return 0;
}
