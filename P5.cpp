// Problem Link: https://leetcode.com/problems/odd-even-linked-list/description/
// Problem Name: 328. Odd Even Linked List (LeetCode)
// Solution: (correct submission)

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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL)
            return head;
        ListNode* odd =  head;
        ListNode* even = head->next;
        ListNode* head2 = head->next;
        while(odd->next != NULL && even->next != NULL){
                odd->next = even->next;
                even->next = odd->next->next;
                odd = odd->next;
                even = even->next;
        }
        odd->next = head2;
        return head;  
    }
};
