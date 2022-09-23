#include <iostream>
#include <vector>
#include <climits>

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

typedef struct ListNode ListNode;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(INT_MIN);
        ListNode* tail = dummy;
        while(list1 && list2){
            if(list1->val < list2->val){
                tail->next = list1;
                list1 = list1->next;
            }
            else{
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }

        tail->next = list1 ? list1 : list2;

        /* remove dummy node and return the result */
        ListNode* head = dummy->next;
        delete(dummy);
        return head;
    }
};

ListNode* createListFromVector(std::vector<int> nums){
    if(nums.empty())
        return nullptr;
    ListNode* list = new ListNode(nums[0]);
    ListNode* tail = list;
    for(int i = 1; i < nums.size(); ++i){
        ListNode* temp = new ListNode(nums[i]);
        tail->next = temp;
        tail = tail->next;
    }
    return list;
}

void printLinkedList(ListNode* list){
    while(list){
        std::cout << list->val << " ";
        list = list->next;
    }
    std::cout << std::endl;
}

void deleteList(ListNode *list){
    while(list){
        ListNode *temp = list;
        list = list->next;
        delete(temp);
    }
}

int main(void){
    ListNode* list1 = createListFromVector({1, 2, 4});
    ListNode* list2 = createListFromVector({1, 3, 4});
    Solution solution;
    ListNode* solutionList = solution.mergeTwoLists(list1, list2);
    printLinkedList(solutionList);
    deleteList(solutionList);
    return 0;
}
