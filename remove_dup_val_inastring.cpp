#include<iostream>
using namespace std;

string removedp(string s){
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=removedp(s.substr[1]);
    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}
int main()
{
    cout<<removedp("aaaabbbbccccdddd");
    return 0;
}