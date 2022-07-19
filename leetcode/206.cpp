 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr_node = head;       
        ListNode *next_node = curr_node->next;
        curr_node->next = NULL;
        while(next_node != NULL){
            ListNode *tempNode = next_node->next;
            next_node->next = curr_node;
        }
    }
};
