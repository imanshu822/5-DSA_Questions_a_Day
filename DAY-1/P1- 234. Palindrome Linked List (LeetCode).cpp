Problem Link: https://leetcode.com/problems/palindrome-linked-list/description/
Problem Name: 234. Palindrome Linked List (LeetCode)
Solution:(correct submission)

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
    bool isPalindrome(ListNode* head) {
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        temp = head;
        stack<int>st;
        int l = count/2;
        while(l--){
            int x = temp->val;
            st.push(x);
            temp = temp->next;
        }
        if(count%2 == 0){
            // temp = temp->next;
            while(temp != NULL){
                if(st.top() == temp->val){
                st.pop();
                temp = temp->next;
                }
                else 
                return false;
        }
            
    }
        else{
            temp = temp->next;
            while(temp != NULL){
            if(st.top() == temp->val){
                st.pop();
                temp = temp->next;
            }
            else return false;
            }
        }
         if(st.empty() == true)
        return true;
    return false;

    }
   
};
