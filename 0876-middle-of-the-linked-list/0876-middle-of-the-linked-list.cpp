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
    ListNode* middleNode(ListNode* head) {
        ListNode *curr = head;
        int cnt = 0;
        while(curr->next != NULL){
            curr = curr->next;
            cnt++;
        }
        int mid = (cnt % 2  == 0) ? cnt/2 : cnt/2 + 1;
        curr = head;
        while(mid--){
            curr = curr->next;
        }
        return curr;
    }
};