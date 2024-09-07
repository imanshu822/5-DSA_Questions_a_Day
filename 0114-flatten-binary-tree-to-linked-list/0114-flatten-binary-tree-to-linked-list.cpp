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
    vector<TreeNode*> store;
    void storeInVector(TreeNode* root){
        if(root == NULL){
            return;
        }
        store.push_back(root);
        storeInVector(root->left);
        storeInVector(root->right);
        return;
    }
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
        storeInVector(root);
        
        for(int i = 1; i < store.size(); i++){
            store[i-1]->left = NULL;
            store[i-1]->right = store[i];
        }
    }
};