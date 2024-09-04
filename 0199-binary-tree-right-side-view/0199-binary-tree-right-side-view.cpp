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
    stack<int> st;
    void solve(TreeNode* root, int level){
        if(root == NULL){
            return;
        }
        if(level == st.size()){
            st.push(root->val);
        }
        solve(root->right, level+ 1);
        solve(root->left, level + 1);
    }
    vector<int> rightSideView(TreeNode* root) {
        solve(root, 0);
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};