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
    ListNode* reverseLL(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* findMiddleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if (fast != nullptr) {
            slow = slow->next;
        }
        if (prev) {
            prev->next = NULL;  // Split the list into two halves
        }
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) {
            return true;
        }

        ListNode* mid = findMiddleNode(head);
        ListNode* revAfterMid = reverseLL(mid);

        ListNode* curr = head;
        ListNode* revCurr = revAfterMid;

        while (revCurr) {
            if (curr->val != revCurr->val) {
                return false;
            }
            curr = curr->next;
            revCurr = revCurr->next;
        }
        return true;
    }
};
