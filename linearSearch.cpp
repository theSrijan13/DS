#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    int key;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout"enter the values in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key whose index to be found"<<endl;
    cin>>key;
    cout<<linearSearch(arr,n,key)
    return 0;
}