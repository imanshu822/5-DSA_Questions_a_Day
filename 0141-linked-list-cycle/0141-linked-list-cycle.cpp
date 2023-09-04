/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
bool hasCycle(ListNode* head) {
    if (head == nullptr || head->next == nullptr) {
        return false;
    }

    ListNode* curr = head;
    ListNode* curr2 = head->next;

    while (curr != curr2) {
        if (curr == nullptr || curr2 == nullptr || curr2->next == nullptr) {
            return false;
        }

        curr = curr->next;
        curr2 = curr2->next->next;
    }

    return true;
}

};