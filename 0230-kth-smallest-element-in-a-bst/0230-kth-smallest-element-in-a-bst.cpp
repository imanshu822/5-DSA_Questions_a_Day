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

    vector<int> store;

    void storeNodesVal(TreeNode* root){
        if(root == NULL){
            return;
        }
        store.push_back(root->val);
        storeNodesVal(root->left);
        storeNodesVal(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        storeNodesVal(root);

        sort(store.begin(), store.end());

        return store[k-1];
    }
};