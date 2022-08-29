#include<iostream>
using namespace std;
int main()
{
    int n;
    int maxNo;
    int minNo;
    int arr[n];
    // taking input
    for(int i=0;i<=n;i+=)
    {
        cin>>arr[i];
    }
    //  output the given array
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i];
        if(arr[i]>maxNo)
        {
            maxNo=arr[i];
        }
        if(arr[i]<minNo)
        {
            minNo=arr[i];
        }
    }
    return 0;
}