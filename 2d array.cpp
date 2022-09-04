#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the dimension of array"<<endl;
    cin>>n>>m>>endl;
    int arr[n][m];
    int x;
    cout<<"enter the value to be searched"<<endl;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==x)
            {
                cout<<i<<" "<<j<<endl;
                flag= true;
            }
        }
    }
    if(flag)
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endll
    }
}