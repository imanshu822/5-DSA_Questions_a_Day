Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/description/
Problem Name: 237. Delete Node in a Linked List (LeetCode)
Solution: (correct Submission)

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
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};
