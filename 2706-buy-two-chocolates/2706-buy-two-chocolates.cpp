class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int ans=0;
        int mincost = prices[0] + prices[1];
        if(mincost<=money){
            ans = money - mincost;
        }
        else{
            ans = money;
        }
        return ans;
            
    }
};