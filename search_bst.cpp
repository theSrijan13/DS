class solution{
    public:
    void searchBST(TreeNode* root,int val){
        if(root == NULL){
            return NULL;
        }
        if(root->val == val){
            return root;
        }
        if(root->val > val){
            return searchBST(root->left,val);
        }
        else{
            return searchBST(root->right,val);
        }
    }
}