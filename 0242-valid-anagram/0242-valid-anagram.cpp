class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size())
        {
            return false;
        }
        vector<int> chars(26,0);
        // traversing it
        for(int i=0;i<s.size();++i)
        {
            ++chars[s[i]-'a'];
            --chars[t[i]-'a'];
        }
        for(int c:chars)
        {
            if(c!=0)
            {
                return false;
            }
        }
        return true;
    }
};