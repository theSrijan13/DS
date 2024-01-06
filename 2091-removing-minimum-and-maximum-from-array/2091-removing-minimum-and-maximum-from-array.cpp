class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int a,b;
        int s = nums.size();
        for(int i=0;i<s;i++){
            if(mini > nums[i]){
                mini = nums[i];
                a = i;
            }
            if(maxi < nums[i]){
                maxi = nums[i];
                b = i;
            }
        }
        int j = max(a,b) + 1;
        int k = s - min(a,b);
        return min(min(j,k),min(a,b)+1+s-max(a,b));
    }
};