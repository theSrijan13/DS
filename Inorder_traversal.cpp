class Solution{
    public:
    void Inorder(TreeNode* root,vector<int> &result){
        // base condition
        if(root==nullptr)
        {
            return;
        }
        Inorder(root->left,result);
        result.push_back(root->val);
        Inorder(root->right,result);
    }
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> result;
        Inorder(root,result);
        return result;
    }
}