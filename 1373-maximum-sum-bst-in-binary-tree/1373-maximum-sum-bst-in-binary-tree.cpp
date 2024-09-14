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
    vector<int> dfs(TreeNode* root, int& maxSum){
        if(root == NULL){
            return {INT_MAX, INT_MIN, 0};  
        }

        auto leftSide = dfs(root->left, maxSum);
        auto rightSide = dfs(root->right, maxSum);

        if(leftSide[1] < root->val && rightSide[0] > root->val){
            int minVal = min(leftSide[0], root->val);  
            int maxVal = max(rightSide[1], root->val);  
            int sum = leftSide[2] + rightSide[2] + root->val; 
            maxSum = max(maxSum, sum);  
            return {minVal, maxVal, sum};
        }
        return {INT_MIN, INT_MAX, maxSum};
    }

    int maxSumBST(TreeNode* root) {
        int maxSum = 0;
        dfs(root, maxSum);
        return maxSum;
    }
};
