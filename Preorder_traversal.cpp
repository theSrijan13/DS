class Solution
{
    public:
    void Preorder(BinaryTree *root,vector<int> &result){
        // base cond
        if(root==nullptr)
        {
            return;
        }
        result.push_back(root->val);
        Preorder(root->left,result);
        Preorder(root->right,result);
    }
    vector<int> preorderTraversal(BinaryTree *root)
    {
        vector<int>result;
        Preorder(root,result);
        return result;
    }
}