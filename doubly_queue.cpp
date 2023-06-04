#include<iostream>
using namespace std;
#include <dqueue>
int main(){
    dequeue<int> d;
    d.push_front(12);
    d.push_back(11);
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back()<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    if(d.empty()){
        cout<<"dequeu is empty"<<endl;
    }
    else{
        cout<<"dequeue is not empty"<<endl;
    }
    return 0;
}