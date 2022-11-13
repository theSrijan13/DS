#include<iotream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertatHead(node* head,int val)
{
    node* head=new node(val);
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void insertatTail(node* head,int val){
    if(head==NULL)
    {
        insertatHead(head,val);
        return;
    }
    node* n = new node(val);
    node* head=temp;
    while(temp->next==NULL)
    {
        temp=temp->next
    }
    temp->next=n;
    n->prev=temp;
}
void display(node* head)
{
    node* head=next;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node* head=NULL;
    insertatTail(1,head);
    insertatTail(2,head);
    insertatTail(3,head);
    insertatTail(4,head);
    display(head);
    insertatHead(5,head);
    display(head);
    return 0;
}