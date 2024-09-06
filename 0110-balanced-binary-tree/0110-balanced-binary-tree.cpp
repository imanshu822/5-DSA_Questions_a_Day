class Solution {
public:
    int height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        return max(left, right) + 1;
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }

        // Check if left and right subtrees are balanced
        if(!isBalanced(root->left) || !isBalanced(root->right)){
            return false;
        }

        // Check if current node is balanced by comparing heights
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if(abs(leftHeight - rightHeight) > 1){
            return false;
        } else {
            return true;
        }
    }
};
