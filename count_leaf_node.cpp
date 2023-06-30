class Solution{
    public:
    void Inorder(BinaryTreeNode<int> *root, int &count)
    {
        if(root==NULL){
            return;
        }
        Inorder(root->left,count);
        if(root->left==NULL && root->right==NULL)
        {
            count++;
        }
        Inorder(root->right,count);
    }
    int noOfLeafNodes(BinaryTreeNode<int> *root)
    {
        int count=0;
        Inorder(root,count);
        return count;
    }
}