#include<iostream>
using namespace std;

int getBit(int n,int pos)
{
    return((n & (1<<pos))!=0);
}
int main()
{
    int n,pos;
    cout<<"enter the value of n and pos"<<endl;
    cin>>n>>pos;
    cout<<getBit(n,pos);
    return 0;
}