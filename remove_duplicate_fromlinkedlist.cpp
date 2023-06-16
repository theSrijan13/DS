class Solution{
    public:
    ListNode* checkDuplicate(ListNode* head){
        // check if list is empty
        if(head == NULL){
            return NULL;
        }
        // create a curr node to traverse
        ListNode* curr = head;
        while(curr!=NULL){
            if(curr->next != NULL && curr->data == curr->next->data){
                ListNode* next_next = curr->next->next;
                ListNode* Todelete = curr->next;
                delete(Todelet);
                curr->next = next_next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
}