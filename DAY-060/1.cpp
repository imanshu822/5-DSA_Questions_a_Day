// Problem Link: https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/description/
// Problem Name: 109. Convert Sorted List to Binary Search Tree (LeetCode)
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* fun(vector<int> v, int l, int r){
        if(l > r) return NULL;
        int mid = (l + r)/2;
        TreeNode* node = new TreeNode(v[mid]);
        // TreeNode->val = v[mid];
        node->left = fun(v, l, mid-1);
        node->right = fun(v, mid+1, r);
        return node;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> v; int count = 0;
        ListNode * curr = head;
        while(curr != NULL){
            v.push_back(curr->val);
            curr = curr->next;
            count++;
        }
        return fun(v, 0, v.size()-1);
    }
};