#include<iostream>
using namespace std;

void Add(int num1,num2)
{
    return num1+num2;
}
int main()
{
    int a=10;
    int b=20;

    int sum=Add(a,b);
    cout<<sum<<endl;
    return 0;
}
// HEAP
int a=10;
int *p=new int();
*p=10;
delete(p);
p=new int[4];
delete[]p;
p=NULL;
