class Solution{
    public:
    int mostFrequentElement(vector<int> &nums,int k){
        sort(nums.begin(),nums.end());
        int i=0,j;
        for(j=0;j<nums.size();++j){
            k=k+nums[j];
            if(k < nums[j] * (j-i+1)){
                k=k-nums[i++];
            }
        }
        return j-i;
    }
}