class Solution {
public:
    string largestGoodInteger(string num) {
        char maxdigit = '\0';
        for(int i = 0;i<=num.size()-3;++i){
            if(num[i] == num[i+1] && num[i] == num[i+2]){
                maxdigit = max(maxdigit,num[i]);
            }
        }
        return maxdigit == '\0' ?"" : string(3,maxdigit);
    }
};