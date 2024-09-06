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
        if(root == NULL){
            return true;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        if(abs(leftHeight - rightHeight) > 1){
            return false;
        }
        bool left =  isBalanced(root->left);
        bool right = isBalanced(root->right);

        if(left == false || right == false){
            return false;
        }
        return true;
    }
};
