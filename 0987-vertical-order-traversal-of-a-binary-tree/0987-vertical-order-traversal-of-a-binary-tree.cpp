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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // create a map of {horizontal-distance, {level, {value}};
        map<int, map<int, multiset<int>>> node;
        // create a queue which sorte pair {TreeNode, pair{horizontal-dist, level}}
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});

        while(!q.empty()){
            auto temp = q.front();
            TreeNode* n = temp.first;
            int hd = temp.second.first;
            int level = temp.second.second;
            q.pop();

            node[hd][level].insert(n->val);

            if(n->left != NULL){
                q.push({n->left,{hd - 1, level + 1}});
            }
            if(n->right != NULL){
                q.push({n->right, {hd + 1, level}});
            }
        }

        vector<vector<int>> res;

        for(auto it = node.begin(); it != node.end(); it++){
            res.push_back({});
            for(auto it2 = it->second.begin(); it2 != it->second.end(); it2++){
                res.back().insert(res.back().end(), it2->second.begin(), it2->second.end());
            }   
        }
        return res;

    }
};