class Solution{
    public:
    vector<int> countBits(int n){
        vector<int> ans;
        for(int i=0;i<=n;i++){
            // intialize count and num
            int count=0;
            int num=i;
            while(num!=0){
                count = count + (num%2);
                num = num/2;
            }
            ans.push_back(count);
        }
        return ans;
    }
}