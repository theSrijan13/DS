class Solution{
    public:
    int solve(TreeNode* root, int &i,int k)
    {
        // base case
        if(root==NULL)
        {
            return -1;
        }
        // inorder traversal
        int left = solve(root->left,i,k)
        if(left != -1){
            return left;
        }
        i++;
        // N
        if(i==k){
            return root->val;
        }
        // R
        return solve(root->right,i,k);

    }
    int kthSmallest(TreeNode* root, int k,int i)
    {
        int i=0;
        return solve(root,i,k);
    }

    
}