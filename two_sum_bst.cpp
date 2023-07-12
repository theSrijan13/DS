class Solution
{
    public:
    void inorder(TreeNode* root,Vector<int> &in)
    {
        // 
        if(root == NULL)
        {
            return;
        }
        // perform inorder
        inorder(root->val,in);
        in.push_back(root->val);
        inorder(root->right,in);
    }
    bool findTarget(TreeNode* root, int k){
        vector<int> inorderval;
        inorder(root,inorderval);
        int i = 0;
        int j = inorderval.size()-1;
        while(i<j)
        {
            int sum = inorderval[i] + inorderval[j];
            if(sum==k)
                return true;
            else if(sum>k)
                j--;
            else
                i++;
        }
        return false;
    }
}