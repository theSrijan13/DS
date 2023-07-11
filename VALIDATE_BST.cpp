class Solution{
    public:
    bool isBST(TreeNode *root,long min,long max)
    {
        // base case
        if(root == NULL)
        {
            return true;
        }
        if(root->val <= min || root->val >= max)
        {
            return false;
        }
        bool left = isBST(root->left,min,rott->val);
        bool right = isBST(root->right,root->val,max);
        return left && right;
    }
    bool validateBST(TreeNode* root){
        return isBST(root LONG_MIN,LONG_MAX);
    }
}