// Problem Link: https://leetcode.com/problems/evaluate-boolean-binary-tree/description/
// Problem Name: 2331. Evaluate Boolean Binary Tree (LeetCode)
// Solution: accepted Submission

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
    bool evaluateTree(TreeNode* root) {
        if(root->val == 0)
            return false;
        else if (root->val == 1)
            return 1;
        else if(root->val == 2){
            root->val = evaluateTree(root->left) || evaluateTree(root->right);
        }
        else if(root->val == 3){
            root->val = evaluateTree(root->left) && evaluateTree(root->right);
        }
        return root->val;
    }
};
