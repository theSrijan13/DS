class Solution{
    public:
    int tileToNumber(string columnTitle){
        int result = 0;
        for(char c:columntitle){
            int d = c - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
}