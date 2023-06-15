class Solution{
    public:
    bool isDetect(ListNode *head){
        if(head==NULL){
            return false;
        }
        // create a map
        map<ListNode* , bool> visited;
        // allocate temp node
        ListNode* temp =head;
        while(temp!=NULL){
            // check if it is already visited or not
            if(visited[temp] == true){
                retur true;
            }
            visited[temp]=true;
            temp = temp->next;
        }
        return false;
    }
};