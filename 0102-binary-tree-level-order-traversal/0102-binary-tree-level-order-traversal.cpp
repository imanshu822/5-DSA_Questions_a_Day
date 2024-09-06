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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        // queue of level and node
        queue<pair<int, TreeNode*>> q;
        map<int, vector<int>> mp;
        q.push({0,root});
        while(!q.empty()){
            auto temp = q.front();
            int level = temp.first;
            TreeNode* n = temp.second;
            q.pop();
            mp[level].push_back(n->val);

            if(temp->left != NULL){
                q.push(temp->left, level+1);
            }
            if(temp->right != NULL){
                q.push(temp->right, level+1);
            }
            res.push_back(curr);
        }
        for(auto it = mp.begin(); it != mp.end(); it++){
            for(int i = 0; i < it->second.size(); i++){
                res[it->first].push_back(it->second[i]);
            }
        }
        return res;
    }
};