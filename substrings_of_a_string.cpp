// c++ program to generate all substrings of a string 
#include<iostream>
using namespace std;
void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subeq(ros,ans+ch);
}
int main()
{
    subseq("ABC","")
    return 0;
}