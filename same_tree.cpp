class Solution
{
    public:
    bool isSametree(BinaryTree* p.BinaryTree* q)
    {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        if(p!=NULL && q==NULL)
        {
            return false;
        }
        if(p==NULL && q!=NULL)
        {
            return false;
        }
        bool left = isSametree(p->left,q->left);
        bool right = isSametree(p->right,q->right);
        bool val = p->val== q->val;
        if(left&&right&&val)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}