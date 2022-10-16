#include<iostream>
using namespace std;

int firstocc(int arr[],int n.int i,int key)
{
    if(n==i)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return o;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key)
{
    int restarray=(arr,n,i+1,key);
    if(restarray !=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,2,4,5,7};
    cout<<firstocc(arr,7,0,2);
    cout<<lastocc(arr,7,0,2);
    return 0;
}