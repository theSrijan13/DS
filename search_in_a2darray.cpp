// searching in a 2 d array sum of element in every row
#include <iostream>
using namespace std;
bool isPresent(int arr[][4],int i,int j,int target)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==target)
                return 1;
        }
    }
    return 0;
}
void printsum(int arr[][4],int i,int j)
{
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<4;j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int target;
    cin>>target;
    if(isPresent(arr,target,i,j))
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    printsum(arr,3,4);
    return 0;
}