#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[i]==key)
        {
            return mid;
        }
        else if(arr[mid]>=key)
        {
            e=mid-1;
        }
        else{
            mid=s+1;
        }
    }
}
int main()
{
    int n;
    int k;
    cout<<"enter the size of array"<<endl;
    cin>>k;
    cout<<"enter the values of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]<<" ";
    }
    cout<<"enter the inde to be found"<<endl;
    cin>>key;
    cout<<binarySearch(arr,n,key);

}