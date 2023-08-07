class Solution{
    public:
    int solve(vector<int> &cost,int n){
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }
        int ans = cost[n] + min(solve(n-1),solve(n-2));
        return ans;
    }
    int solve2(vector<int> &cost,int n,vector<int>& dp ){
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }
        if(dp[n] != -1){
            return dp[n];
        }
        dp[n] = cost[n] + min(solve2(cost,n-1,dp),solve(cost,n-2,dp));

    }
    int solve3(vector<int> & cost,int n){
        vector<int> dp(n+1);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2;i<n;i++){
            dp[i] = min(dp[i-1],dp[i-2]);
        }
        return min(dp[i-1],dp[i-2]);
    }
    int minclimbstairs(vector<int> cost){
        int n = cost.size();
        vector<int> dp(n+1,-1);
        int ans = min(solve(cost,n-1),solve(cost,n-2));
        int ans = min(solve(cost,n-1,dp),solve(cost,n-2,dp));
        return ans;
    }

}