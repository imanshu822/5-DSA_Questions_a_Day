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
    vector<int> v;
    void inorder(TreeNode *root){
        if(root == NULL) return ;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        int n = v.size()-1;
        TreeNode *temp = new TreeNode(v[0]);
        TreeNode *ans = temp;
        int i = 1;
        while(n--){
            TreeNode *curl = new TreeNode(v[i]);
            temp->right = curl;
            temp = temp->right;
            i++;
        }
        return ans;
        
    }
};