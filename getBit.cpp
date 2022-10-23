#include<iostream>
using namespace std;
int setBit(int n,int pos)
{
    return(n |(1<<pos));
}
int main()
{
    int n,pos;
    cout<<"enter the value of n and pos"<<endl;
    cin>>n>>pos;
    cout<<setBit(n,pos);
    return 0;
}