#include<algorithm>
#include<priority_queue>
int getKthLargest(vector<int> &arr, int k)
{
    vector<int> Sumstore;
    for(int i=0;i<arr.size();i++){
        int sum = 0;
        for(int j=i;j<arr.size();j++)
        {
            sum+=arr[j];
            sumstore.push_back(sum);
        }
    }
    sort(sumstore.begin(),sumstore.end());
    return sumstore[sumstore.size()-k];
}
// aproavh 2
priority_queue<int,vector<int>,greater<int>>  mini;
int n = arr.size();
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
        if(minin.size() > k){
            mini.push(sum);
        }
        else{
            if(k > mini.size()){
                mini.pop();
                mini.push(sum);
            }
        }
    }
    return mini.top();
}