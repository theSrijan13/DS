class Solution {
public:
    //int binarysearch(vector<int> &nums,int s,int e,int targe
    int search(vector<int>& nums, int target) {
        int s =0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
        }
        return -1;
        
    }
};