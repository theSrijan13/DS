class Solution{
    public:
    ListNode* deleteDuplicates(ListNode* head){
        if(head ==  NULL){
            return head;
        }
        ListNode* prev = new ListNode();
        prev->next = head;
        ListNode* curr =  prev;
        while(curr->next!=NULL && cur->next->next!=NULL){
            if(curr->next->val == curr->next->next->val){
                int data = curr->next->next;
                while(curr->next!=NULL && curr->next->val == data){
                    curr->next = curr->next->next;
                }
            }
            else{
                curr=curr->next;
            }
        }
        return prev->next;
    }
}