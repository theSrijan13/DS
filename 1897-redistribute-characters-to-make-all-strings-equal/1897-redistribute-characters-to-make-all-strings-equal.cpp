class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        vector<int> counts(26,0);
        for(string word : words){
            for(char c: word){
                counts[c-'a']++;
            }
        }
        for(int v : counts){
            if(v%n != 0){
                return false;
            }
        }
        return true;
    }
};