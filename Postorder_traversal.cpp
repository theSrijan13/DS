class Solution
{
    public:
    void Postorder(BinaryTree *root,vector<int> &result)
    {
        if(root==nullptr)
        {
            return;
        }
        //LRN
        Postorder(root->left,result);
        Postorder(root->right,result);
        result.push_back(root->val);
    }
    vector<int> postorderTraversal(Binary *root)
    {
        vector<int> result;
        PostOrder(root,result);
        return result;
    }
}