class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        if(root2 == NULL && root1 == NULL)return true;
        if(root1 != NULL && root2 == NULL)return false;
        if(root2 != NULL && root1 == NULL)return false;
        if(root1->val != root2->val)return false;
        bool sameComp  = flipEquiv(root1->left, root2->left) && flipEquiv(root1->right, root2->right);
        bool revComp = flipEquiv(root1->left, root2->right) && flipEquiv(root1->right, root2->left);
        return sameComp || revComp;
    }
};