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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, int> inDeg;
        unordered_map<int, TreeNode*> valueNodeMp;

        for (auto& des : descriptions) {
            int parent = des[0], child = des[1];
            bool isLeftChild = (des[2] == 1);

            if (inDeg.find(parent) == inDeg.end()) inDeg[parent] = 0;
            inDeg[child]--;

            if (valueNodeMp.find(parent) == valueNodeMp.end()) 
                valueNodeMp[parent] = new TreeNode(parent);
            if (valueNodeMp.find(child) == valueNodeMp.end()) 
                valueNodeMp[child] = new TreeNode(child);

            if (isLeftChild) {
                valueNodeMp[parent]->left = valueNodeMp[child];
            } else {
                valueNodeMp[parent]->right = valueNodeMp[child];
            }
        }

        for (auto& entry : inDeg) {
            if (entry.second == 0) 
                return valueNodeMp[entry.first];
        }

        return nullptr;
    }
};