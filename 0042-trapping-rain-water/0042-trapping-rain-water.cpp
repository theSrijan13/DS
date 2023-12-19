class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int n = height.size();
        int r = n-1;
        int ans = 0;
        int lmax = INT_MIN;
        int rmax = INT_MIN;
        while(l<r){
            lmax = max(lmax,height[l]);
            rmax = max(rmax, height[r]);
            ans += (lmax<rmax)?lmax-height[l++]:rmax-height[r--];
        }
        return ans;
        
    }
};