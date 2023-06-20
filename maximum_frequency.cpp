class Solution{
    public:
    int maximumFrequency(vector<int> &arr,int n){
        // creating unordered map
        unordered_map<int,int> count;
        int maxFreq=0;
        int maxAns;
        for(int i=0;i<arr.size();i++){
            count[arr[i]]++;
            maxFreq=max(maxFreq,count[arr[i]]);
        }
        for(int i=0;i<nums.size();i++){
            if(maxFreq==count[arr[i]]){
                maxAns=arr[i];
                break;
            }
        }
        return maxAns;


   }
}