class Solution {
public:
    bool ispalindrome(string &s){
        int start = 0;
        int end = s.size() - 1;
        while(start <= end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(string s: words){
            if(ispalindrome(s)){
                return s;
            }
        }
        return  "";
    }
};