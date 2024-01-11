class Solution {
public:
    int findLucky(vector<int>& arr) {
        int lucky = -1;
        unordered_map<int,int> mp;
        for(auto i: arr){
            mp[i]++;
        }
        for(auto k:mp){
            if(k.first == k.second){
                lucky = max(lucky,k.first);
            }
        }
        return lucky;
        
    }
};