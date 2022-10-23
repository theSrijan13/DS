// c++ program to solve 0-1 knapsack problem
using namespace std;
#include<iostream>
int Knapsack(int value[],int wt,int n,int W)
{
    if(n==0 || W==0)
    {
        return n;
    }
    if(wt[n-1]>W)
    {
        return Knapsack(value,wt,n-1,W);
    }
    return max(Knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],Knapsack(value,wt,n-1,W));

}
int main()
{
    int value[]={100,50,150};
    int wt[]={10,20,30};
    int W=50;
    cout<<Knapsack(value,wt,3,W)<<endl;
    return 0;
}