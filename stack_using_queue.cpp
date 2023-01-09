#include <iostream>
using namespace std;
#include<queue>

class stack
{
    int N;
    queue<int> q1;
    queue<int>q2;
    public:
    stack(){
        N=0;
    }
    void push(int val)
    {
        q2.push(val);
        while(!q1.empty())
        {
            q2.push(q1.front())
            q1.pop();
        }
        queue<int> temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop()
    {
        q1.pop();
        N--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return N;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    st.top();
    cout<<st.top()<<endl;
    return 0;
}