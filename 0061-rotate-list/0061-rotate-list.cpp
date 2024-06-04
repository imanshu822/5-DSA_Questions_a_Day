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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        int len = 1;
        while(curr->next){
            len++;
            curr = curr->next;
        }
        int newK = k % len;
        if(newK == 0)
            return head;
            
        curr->next = head;
        int breakPoint = len - newK;
        curr = head;
        for(int i = 1; i < breakPoint; i++){
            curr = curr->next;
        }
        ListNode* secondList = curr->next;
        curr->next = NULL;
        
        return secondList;
    }
};