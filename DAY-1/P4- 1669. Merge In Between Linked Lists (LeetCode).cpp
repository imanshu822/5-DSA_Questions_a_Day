Problem Link: https://leetcode.com/problems/merge-in-between-linked-lists/description/
Problem Name: 1669. Merge In Between Linked Lists (LeetCode)
Solutin: (correct Submission)

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
        ListNode *p = list1;
        ListNode *r = list1;
        ListNode *q = list2;
        while(q->next != NULL)
            q = q->next;
        int l = a-1;
        while(p != NULL && l--)
            p = p->next;
        while(r != NULL && b--)
            r = r->next;
        p->next = list2;
        q->next = r->next;
        return list1;
    }
};

