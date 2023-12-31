class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        unordered_map<char,int> firstindex;
        int ans = -1;
        for(int i =0;i<n;i++){
            if(firstindex.find(s[i]) != firstindex.end()){
                ans = max(ans,i-firstindex[s[i]]-1);
            }
            else{
                firstindex[s[i]]=i;
            }
        }
        return ans;
    }
};