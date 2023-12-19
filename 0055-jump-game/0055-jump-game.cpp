class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int i = 0, mx = 0;
        if(n==1){
            return true;
        }
        while(i<n && mx>=i){
            mx = max(mx, i + nums[i]);
            if(mx >= n-1){
                return true;
            }
            i++;
        }
        return false;
    }
};