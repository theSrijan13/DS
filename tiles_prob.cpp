// c++ program to count no of ways to tile the given board
#include<iostream>
using namespace std;
int fillingways(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fillingways(n-1)+fillingways(n-2);
}
int main()
{
    cout<<fillingways(4)
    return 0;
}