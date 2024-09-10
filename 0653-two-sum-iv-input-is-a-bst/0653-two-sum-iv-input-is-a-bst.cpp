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

    void storeInVector(TreeNode* root){
        if(root == NULL){
            return;
        }
        store.push_back(root->val);
        storeInVector(root->left);
        storeInVector(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        storeInVector(root);
        int n = store.size();
        int sum = 0;
        set<int> st;
        for(int i = 0; i < n; i++){
            int rem = k - store[i];
            if(st.find(rem) != st.end())
                return true;
            st.insert(store[i]);

        }
        return false;
    }
};