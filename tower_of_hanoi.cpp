// c++ program for tower of hanoi problem
#include<iostream>
using namespace std;

void towerofhanoi(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" To "<<endl;
    towerofhanoi(s-1,helper,dest,src);
}
int main()
{
    towerofhanoi(3,'A','B','C');
    return 0;
}