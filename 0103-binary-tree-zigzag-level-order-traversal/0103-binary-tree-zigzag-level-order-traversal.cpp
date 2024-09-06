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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        if (root == nullptr) {
            return res;
        }
        map<int, vector<int>> mp;
        queue<pair<int, TreeNode*>> q;
        q.push({0, root});

        while(!q.empty()){
            auto temp = q.front();
            int level = temp.first;
            TreeNode* n = temp.second;
            q.pop();

            mp[level].push_back(n->val);

            if(level % 2 == 0){
                if(n->right != NULL){
                    q.push({level + 1, n->right});
                }
                if(n->left != NULL){
                    q.push({level + 1, n->left});
                }
            }else{
                if(n->left != NULL){
                    q.push({level + 1, n->left});
                }
                if(n->right != NULL){
                    q.push({level + 1, n->right});
                }
            }
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            res.push_back(it->second);
        }
        return res;
    }
};