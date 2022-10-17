// c++ program to generate substring with ASCII number
#include<iostream>
using namespace std;
void subeq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=[0];
    int code=ch;
    string ans=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));

}
int main()
{
    subseq("ABC","")
    return 0;
}
