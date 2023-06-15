class Solution{
    public:
    ListNode *detectcycle(ListNode* head){
        // initialize slow and fast
        ListNode* slow=head;
        ListNode* fast = head;
        while( fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return break;
            }
        }
        if(!(fast && fast->next)){
            return NULL;
        }
        while(head!=NULL){
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
}