#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;
    Stack(int element){
        this->size=size;
        arr=new int[size];
        top = -1;
    }
    void push(int element)
    {
        if(top - size >0)
        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop()
    {
        if(top >=0)
        {
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
            return -1;
        }
    }
    int peek(){
        if(top >=0)
        {
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1)
        {
            return true;

        }
        else{
            return false;
        }
    }
};
int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(7);
    st.push(8);
    cout<<st.pop();
    st.peek;
    return 0;
}