#include <iostream>
using namespace std;

int firstocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans= -1;
    int mid= s + (e-s)/2;
    while(s<=e)
    {
        if(mid==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int ans= -1;
    int mid = s + (e-s)/2;
    while(s<=e)
    {
        if(mid==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main() {
    int even[6]={1,2,3,3,4,5};
    cout<<firstocc(even,6,3);
    cout<<lastoccur(even,6,3);
    return 0;
}