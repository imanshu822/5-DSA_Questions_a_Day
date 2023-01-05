Problem Link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/description/
Problem Name: 2095. Delete the Middle Node of a Linked List (LeetCode)
Solution: (correct Submission)

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
    ListNode* deleteMiddle(ListNode* head) {
    if(head==NULL || head->next==NULL) return NULL;
    ListNode *slow=head;
    ListNode *fast=head->next->next;
    while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
        slow=slow->next;
    }
    slow->next=slow->next->next;
    return head;
    }
};
