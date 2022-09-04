#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the size of word"<<endl;
    cin>>n;

    char arr[n+1];
    cout<<"enter the word"<<endl;
    cin>>arr;

    bool check = 1;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check==true)
    {
        cout<<"entered word is a palindrome "<<endl;
    }
    else
    {
        cout<<"entered word is not a palindrome "<<endl;
    }
    return 0;
}