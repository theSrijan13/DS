class Solution {
public:
    bool hasevendigit(int num){
        int digitcount=0;
        while(num){
            digitcount++;
            num = num/10;
        }
        return (digitcount & 1) == 0;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int num:nums){
            if(hasevendigit(num)){
                count++;
            }
        }
        return count;
    }
};