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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int count = 0;
        while(curr){
            count++;
            curr = curr->next;
        }
        int target = count - n;
        if(target == 0){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        curr = head;
        while(target-- > 1){
            curr = curr->next;
        }
        ListNode* nodeToDelete = curr->next;
        curr->next = curr->next->next;
        delete nodeToDelete;
        return head;
    }
};