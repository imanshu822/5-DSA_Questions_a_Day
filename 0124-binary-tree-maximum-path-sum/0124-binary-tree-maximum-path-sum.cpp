class Solution {
public:
    int maxi = INT_MIN;  
    
    int maxPathSumHelper(TreeNode* root) {
        if (root == NULL)
            return 0;

        int leftSum = max(0, maxPathSumHelper(root->left));
        int rightSum = max(0, maxPathSumHelper(root->right));

        maxi = max(maxi, leftSum + rightSum + root->val);

        return root->val + max(leftSum, rightSum);
    }

    int maxPathSum(TreeNode* root) {
        maxPathSumHelper(root);
        return maxi;
    }
};
