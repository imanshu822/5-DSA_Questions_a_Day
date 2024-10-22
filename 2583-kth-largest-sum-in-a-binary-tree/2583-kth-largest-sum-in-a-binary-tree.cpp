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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root == NULL){
            return 0;
        }
        vector<long long> levelSum;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();

            long long currLevelSum = 0;

            for(int i = 0; i < size; i++){
                TreeNode* curr = q.front();
                q.pop();
                currLevelSum += curr->val;

                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            levelSum.push_back(currLevelSum);
        }

        sort(levelSum.begin(), levelSum.end(), greater<long long> ());
        if(k > levelSum.size()){
            return -1;
        }
        return levelSum[k-1];
    }
};