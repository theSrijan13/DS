class Solution{
    public:
    void flatten(TreeNode* root){
        // create a curr node
        TreeNode* curr = root;
        while(curr != NULL)
        {
            if(curr->left)
            {
                // create a temp node
                TreeNode* temp = curr->left;
                while(temp->right)
                    temp = temp->right;
                temp->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
}