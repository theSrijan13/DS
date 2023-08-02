class solution{
    public:
    vector<int> searchrange(vector<int>& nums,int target){

        int startpos = -1;
        int endpos = -1;
        int n = nums.size();
        // finding startposition
        for(int i =0;i<n;i++){
            if(nums[i] == target){
                startpos = i;
                break;
            }
        }
        // finding end pos
        for(int i = n-1;i>=0;i--){
            if(nums[i] == target){
                endpos = i;
                break;
            }
        }
        return {startpos, endpos};
    }
}
// APPROACH 2 USING BINARY SEARCH
class solution{
    private:
    int lowerbound(vector<int>& nums,int start,int end,int target){
        while(start<=end){
            int mid = (start + end) >>1;
            if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return start;
    }
    public:
    vector<int> searchrange(vector<int>& nums,int target){
        int start = 0;
        int end = nums.size()-1;
        int startpos = lowerbound(nums,start,end,target);
        int endpos = lowerbound(nums,start,end,target+1)-1;
        if(startpos < nums.size() && nums[startpos] == target){
            return {startpos,endpos};
        }
        else{
            return{-1,-1};
        }
    }
}