class Solution {
public:
    int totalMoney(int n) {
        int ans = 0;
        int mon = 1;
        while(n>0){
            for(int i = 0;i<min(n,7);i++){
                ans += mon + i;
            }
            n = n-7;
            mon++;
        }
        return ans;
    }
};