class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int big = 0;
        int secbig = 0;
        for(int num : nums){
            if(num > big){
                secbig = big;
                big = num;
            }
            else{
                secbig = max(secbig,num);
            }
        }
        return(big - 1)*(secbig - 1);
    }
};