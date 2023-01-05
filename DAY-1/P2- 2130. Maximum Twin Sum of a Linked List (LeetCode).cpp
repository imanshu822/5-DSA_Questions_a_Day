// Problem Link: https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/description/
// Problem Name: 2130. Maximum Twin Sum of a Linked List (LeetCode)
// Solution:(correct Submission)

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
    int pairSum(ListNode* head) {
        stack<int> st;
        int count = 0;
        ListNode *curr = head;
        while(curr != NULL){
            count++;
            curr = curr->next;
        }
        curr = head;
        int l = count/2;
        while(l--){
            int x = curr->val;
            st.push(x);
            curr = curr->next;
        }
        l = count/2;
        int ans = 0;
        while(curr != NULL){
            int twinSum = st.top() + curr->val;
            st.pop(); curr = curr->next;
            ans = max(ans,twinSum);
        }
        return ans;
    }
};
