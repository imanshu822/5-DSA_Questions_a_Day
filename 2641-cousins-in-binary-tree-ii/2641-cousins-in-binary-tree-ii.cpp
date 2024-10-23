/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x, left, right) {}
 * };
 */
class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        map<TreeNode*, long long> m; // sum of children
        TreeNode* bigroot = new TreeNode();
        m[bigroot] = root->val;
        
        map<TreeNode*, TreeNode*> parent; // node->parent
        parent[root] = bigroot;
        vector<long long> levelsum;
        levelsum.push_back(root->val);
        
        queue<TreeNode*> q;
        q.push(root);
        
        // Calculate the sum of each level and children's sum for each node
        while (!q.empty()) {
            int levelSize = q.size();
            long long thislevelsum = 0;
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                m[node] = 0;
                
                if (node->left) {
                    m[node] += node->left->val;
                    parent[node->left] = node;
                    q.push(node->left);
                }
                if (node->right) {
                    m[node] += node->right->val;
                    parent[node->right] = node;
                    q.push(node->right);
                }
                thislevelsum += m[node];
            }
            levelsum.push_back(thislevelsum);
        }

        int le = 0;
        q.push(root);

        // Update each node's value based on the level sum and parent's children sum
        while (!q.empty()) {
            int levelSize = q.size();
            for (int i = 0; i < levelSize; ++i) {
                TreeNode* node = q.front();
                q.pop();
                node->val = levelsum[le] - m[parent[node]];
                
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            le++;
        }

        return root;
    }
};