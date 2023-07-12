class Solution{
    public:
    void Inorder(TreeNode<int> *root,vector<int> &in){
        if(root==NULL){
            return ;
        }
        Inorder(root->left,in);
        in.push_back(root->val);
        Inorder(root->right,in);

    }
    TreeNode<int> *flatten(TreeNode<int> *root)
    {
        vector<int> inorderval;
        Inorder(root,inorderval);
        int n= inorderval.size()-1;
        TreeNode<int> newRoot = TreeNode<int>(inorderval[0]);
        // making curr pointer
        TreeNode<int> *curr = newRoot;
        for(int i =1;i<n;i++)
        {
            TreeNode<int> *temp = new TreeNode<int>(inorderval[i]);
            curr->left=NULL;
            curr->right = temp;
            curr=temp;
        }
        //3rd step
        curr->left=NULL;
        curr->right=NULL;
    }
}