#include<iostream>
using namespace std;
void getDigits(int N){
    int arr[100];
    int i=0;
    int r;
    while(N!=0){
        r=N%10;
        arr[i]=r;
        i++;
        N=N/10;
    }
    for(int j=i-1;j>-1;j--){
        cout<<arr[j];
    }
}
int main()
{
    int N=7153210;
    getDigits(N);
    return 0;

}