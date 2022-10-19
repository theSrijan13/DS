// c++ program for friends paring problem
using namespace std;
#include<iostream>

int friendsparing(int n)
{
    if(n==0||n==1||n==2)
    {
        return n;
    }
    return friendsparing(n-1)+friendsparing(n-2)*n-1

}
int main()
{
    cout<<friendsparing(4)<<endl;
    return 0;
}