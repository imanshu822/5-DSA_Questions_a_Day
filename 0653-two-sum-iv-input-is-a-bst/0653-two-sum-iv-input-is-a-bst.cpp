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
    unordered_set<int> st;
    bool findTarget(TreeNode* root, int k) {
        if(root == NULL){
            return false;
        }

        if(st.find(k - root->val) != st.end()){
            return true;
        }
        st.insert(root->val);
        bool fromLeftSide = findTarget(root->left, k);
        bool fromRightSide = findTarget(root->right, k);

        return fromLeftSide || fromRightSide;
    }
};