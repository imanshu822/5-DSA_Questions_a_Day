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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* prev = NULL;
        ListNode* cur = head;

        while(cur != NULL && cur->next != NULL){
            prev = cur;
            cur = cur->next;
            int d = __gcd(prev->val, cur->val);
            ListNode* newNode = new ListNode(d);
            newNode->next = cur;
            prev->next = newNode;
        }
        return head;
    }
};