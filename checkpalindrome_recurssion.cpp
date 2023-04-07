#include <iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j)
{
    // base
    if(i>j) return true;
    if(str[i]!=str[j]) return false;
    else{
        checkPalindrome(str,i+1,j-1);
    }
}
int main()
{
    string name='aba';
    bool isPlaindrome=checkPalindrome(name,0,name.length()-1);
    if(isPalindrome){
        cout<<"Its a palindrome"<<endl;
    }
    else{
        cout<<"Its not a palindrome"<<endl;
    }
    cout<<name<<endl;

    return 0;
}