class Solution{
    private:
    void insertionatTail(Node* &head,Node* &tail,int d){
        Node* newNode = new Node(d);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        } 
        else{
            tail->next = newNode;
            tail=newNode;
        }
    }
    public:
    Node* copyList(Node* head){
        // create a copy of list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        Node* temp =head;
        while(temp!=NULL){
            insertionatTail(cloneHead,cloneTail,temp->data);
            temp=temp->next;
        }
        unordered_map<Node*,Node*> oldToNew;
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL ){
            oldToNew[originalNode] = cloneNode;
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        } 
        originalNode = head;
        cloneNode = cloneHead;
        while(originalNode != NULL){
            cloneNode->random = oldToNew[originalNode->random];
            originalNode=originalNode->next;
            cloneNode=cloneNode->next;
        } 
        return cloneHead;
    }
}