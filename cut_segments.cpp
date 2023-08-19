#include<limits.h>
int solve(int n,int x,int y,int z){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int a = solve(n-x,x,y,z)+1;
    int b = solve(n-y,x,y,z)+1;
    int c = solve(n-z,x,y,z)+1;
    int ans = max(a,max(b,c));
    return ans;
}
int solvemem(int n,int x,int y,int z){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int a = solvemem(n-x, x, y, z,dp)+1;
    int b = solvemem(n-y,x,y,z,dp)+1;
    int c = solvemem(n-z,x,y,z,dp)+1;
    dp[n] = max(a,max(b,c));
    return dp[n];
}
int getsegments(int n,int x,int y,int z){
    vector<int> dp(n+1,-1);
    int ans = solvemem(n,x,y,z,dp);
    if(ans<0){
        return 0;
    }
    else{
        return ans;
    }

}