// Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/description/
// Problem Name: 160. Intersection of Two Linked Lists (LeetCode)
// Solution: accpted submission

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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            
        ListNode *h1 = headA;
        int c1 = 0, c2 = 0;
       while(h1){
           ListNode *temp = headB;
           while(temp){
               if(h1 == temp){
                   return h1;
               }
                temp = temp->next;
           }
           h1 = h1->next;
       }
        return h1;
    }
};
