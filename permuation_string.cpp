// c++ program to print all possible permutation of a string
#include<iostream>
using namespace std;
void permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permuation(ros,ans+ch);
    }
}
int main()
{
    cout<<permutation("ABC","");
    return 0;
}