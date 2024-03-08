class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        // find frequency of each element
        unordered_map<int,int> frequencies;
        for(int num : nums){
            frequencies[num]++;
        }
        // determine max frequency
        int maxfrequency = 0;
        for(auto[num, frequency] : frequencies){
            maxfrequency = max(maxfrequency, frequency);
        }
        int frequencyOfMaxFrequency = 0;
        for (auto [num, frequency] : frequencies) {
            if (frequency == maxfrequency) {
                frequencyOfMaxFrequency++;
            }
        }
        return frequencyOfMaxFrequency * maxfrequency;
        
    }
};