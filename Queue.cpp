#include <iostream>
#define n 10
using namespace std;

class Queue
{
    int *arr;
    int front;
    int back;
    public:
    Queue(){
        arr=new int[n];
        front =-1;
        back=-1;
    }
    void push(int x)
    {
        if(back==n-1)
        {
            cout<<"stack overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1)
        {
            front++;
        }
    }
    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements in the stack"<<endl;
        }
        front++;
    }
    int peak()
    {
        if(front==-1 || front>back)
        {
            cout<<"no elements in the queue"<<endl;
            return -1
        }
        return arr[front];
    }
    bool Empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;
    q.push(1);
    q,push(2);
    q.push(3);
    q.push(4);
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.peak()<<endl;
    q.pop();
    cout<<q.Empty()<<endl;
    return 0;
}