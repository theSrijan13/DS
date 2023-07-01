class Solution{
    public:
    int maxDepth(struct* root)
    {
        //base 
        if(root==NULL)
        {
            return 0;
        }
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        int ans = max(left,right)+1;
        return ans;
    }
    int minDepth(struct* root){
        // base
        if(root==nullptr)
        {
            return 0;
        }
        int left = (root->left)+1;
        int right = (root->right)+1;
        if(root->left==NULL)
        {
            return right;
        }
        if(root->right==NULL)
        {
            return left;
        }
        int ans = min(left,right);
        return ans;
    }
}