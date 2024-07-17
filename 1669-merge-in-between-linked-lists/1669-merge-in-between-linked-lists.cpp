/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list1;
        
        ListNode* temp = list2;

        // ListNode* curr = list1;
        a--;
        while(temp1->next != NULL && a--){
            temp1 = temp1->next;
        }
        while(temp2->next != NULL && b--){
            temp2 = temp2->next;
        }

        while(temp->next != NULL){
            temp = temp->next;
        }
        temp1->next = list2;
        temp->next = temp2->next;

        return list1;
    }
};