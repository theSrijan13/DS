class Solution
{
    public:
    TreeNode* inverttree(TreeNode* root)
    {
        // create three pointer
        TreeNode *a,*b, *c;
        //check root null
        if(root=NULL)
        {
            return root;
        }
        // traverse left and right 
        a = inverttree(root->left);
        b = inverttree(root->right);
        // swap using third varible
        c=a;
        a=b;
        b=c;
        root->left=a;
        root->right=b;
        return result;
    }
}