#include<iostream>
using namespace std;

int updateBit(int n,int pos,int val)
{
    int mask= ~(1<<pos);
    n = n & mask;
    return (n | value<<pos);
}
int main()
{
    int n,pos,val;
    cout<<"enter the values for n,pos,val"<<endl;
    cin>>n>>pos>>val;
    cout<<updateBit(n,pos,val);
    return 0;
}