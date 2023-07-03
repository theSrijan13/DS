class Solution{
    public:
    bool issameTree(TreeNode *p,TreeNode *q)
    {
        if(P == NULL && q == NULL)
        {
            return true;
        }
        if(p == NULL || q == NULL)
        {
            return false;
            if(q->val != p->val){
                return false;
            }
        }
        return (issameTree(q->left,p->right) && issameTree(p->left,q->right));
    }
    bool isSymettric(TreeNode *root)
    {
        if(root==NULL)
        {
            return true;
        }
        return issameTree(root->left,root->right);
    }
}