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
    int heightOfTree(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int left = heightOfTree(root->left);
        int right = heightOfTree(root->right);
        return (max(left, right) + 1);
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }

        // Check if the left and right subtrees are balanced
        if (!isBalanced(root->left) || !isBalanced(root->right)) {
            return false;
        }

        // Calculate the height of the left and right subtrees
        int leftHeight = heightOfTree(root->left);
        int rightHeight = heightOfTree(root->right);

        // Check the height difference
        if(abs(leftHeight - rightHeight) > 1) {
            return false;
        }
        
        return true;
    }
};