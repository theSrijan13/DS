class Solution{
    int majorityele(vector<int> &nums){
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
}