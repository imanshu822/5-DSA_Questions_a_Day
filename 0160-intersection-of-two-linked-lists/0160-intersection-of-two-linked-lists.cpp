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
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;

        int len1 = 0, len2 = 0;
        while(curr1){
            len1++;
            curr1 = curr1->next;
        }
        while(curr2){
            len2++;
            curr2 = curr2->next;
        }

        curr1 = headA;
        curr2 = headB;

        if(len1 > len2){
            int diff = len1 - len2;
            while(diff--){
                curr1 = curr1->next;
            }
        }else{
            int diff = len2 - len1;
            while(diff--){
                curr2 = curr2->next;
            }
        }
        while(curr1 || curr2){
            if(curr1 == curr2){
                return curr1;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return NULL;
    }
};