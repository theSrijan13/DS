class Solution {
    public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ans;
        set<int> st;
        int i,j = 0;
        
        while(i<nums1.size() && j < nums2.size())
        {
            if(nums1[i] == nums2[j]){
                st.insert(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else if(nums1[i] > nums2[j]){
                j++;
            }
        }
        for(auto val  : st){
            ans.push_back(val);
        }
        return ans;

    }
}