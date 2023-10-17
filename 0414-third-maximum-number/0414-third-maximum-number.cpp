class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int countele = 1;
        int prevele = nums[0];
        for(int i=0;i<nums.size();++i){
            if(nums[i] != prevele){
                countele += 1;
                prevele = nums[i];
            }
            if(countele == 3){
                return nums[i];
            }
        }
        return nums[0];
        

    }
};