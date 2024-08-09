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

    int solve(TreeNode* root, int curr_min, int curr_max){
        if(root == NULL){
            return abs(curr_max - curr_min);
        }

        curr_min = min(curr_min, root->val);
        curr_max = max(curr_max, root->val);
        int left = solve(root->left, curr_min, curr_max); 
        int right = solve(root->right, curr_min, curr_max);
        
        return max(left, right);
    }

    int maxAncestorDiff(TreeNode* root) {
        int maxi = INT_MAX;
        return solve(root, maxi, root->val);
    }
};