class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> trails(nums.size(),0);
        int size = 0;
        for(int x:nums){
            int i=0,j = size;
            while(i<j){
                int m = (i+j)/2;
                if(trails[m] < x)
                    i = m + 1;
                else
                    j = m;
                
            }
            trails[i] = x;
            if(i==size) ++size;
            
        }
        return size;
    }
};