class Solution{
    public:
    // using recusrsion
    int solve(vector<int> &nums,int n){
        if(n<0){
            return 0;
        }
        if(n==0){
            return nums[0];
        }
        int exl = solve(nums,n-2) + nums[n];
        int incl = solve(nums,n-1) + 0;
        return max(exl,incl);
    }
    // using memoization
    int solve2(vector<int> &nums,int n){
        if(n<0){
            return 0;
        }
        if(n==0){
            return nums[0];

        }
        if(dp[n] != -1){
            return dp[n];
        }
        int exl = solve2(nums,n-2,dp) + nums[n];
        int incl = solve2(nums,n-1,dp) + 0;
        dp[n]= max(exl,incl);
        return dp[n];
    }
    // using tabular
    int solve3(vector<int> &nums){
        int n  = nums.size();
        vector<int> dp(n,0);
        dp[0] = nums[0];
        for(int i = 1;i<n;i++){
            int exl = solve(nums,n-2) + nums[i];
            int incl = solve(nums,n-1) + 0;
            dp[i] =  max(exl,incl);
        }
        return dp[n];
    
    }
    int maximumNonAdjacentSum(vector<int> &nums){
        int n = nums.size();
        vector<int> dp(n-1,-1);
        int ans = solve(nums,n-1);
        return ans;
    }
}